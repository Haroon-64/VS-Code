import os
import torch
import torch.nn as nn
import torch.nn.functional as F

path = os.getcwd() + '/input.txt'
#------------------------------
#   hyperparameters
block_size = 8 # time dimension of the sequence
batch_size = 32  # number of sequences in parallel
max_iters = 30000
learning_rate =1e-3
device = 'cuda' if torch.cuda.is_available() else 'cpu'
eval_iters =200
#--------------------------------

data  = open(path,'r').read()

chars = sorted(list(set(data)))
vocab_size = len(chars)

# mappping of characters to integers
s_i = {c:i for i,c in enumerate(chars)}
i_s = {i:c for i,c in enumerate(chars)}
def encode(x): return [s_i[c] for c in x]  # encode input string to integers
def decode(x): return ''.join([i_s[i] for i in x])# decode integers to input string


# train-val split
data = torch.tensor(encode(data), dtype=torch.long)
n = int(len(data)*0.9)
train_data = data[:n]
val_data = data[n:]

# data loading
def create_batch(slpit):
    data = train_data if slpit=='train' else val_data
    ix = torch.randint(len(data)-block_size, (batch_size,))
    x = torch.stack([data[i:i+block_size] for i in ix])
    y = torch.stack([data[i+1:i+block_size+1] for i in ix])
    x,y = x.to(device),y.to(device)
    return x,y

@torch.no_grad()
def estimateLoss():
    out ={}
    model.eval()
    for split in ['train', 'test']:
        losses =torch.zeros(eval_iters)
        for k in range(eval_iters):
            X,Y = create_batch(split)
            logits,loss =model(X,Y)
            losses[k] =loss.item()
            out[split] = losses.mean()
        model.train()
        return out
    

class BigramModel(nn.Module):
    def __init__(self,vocab_size ): 
        super().__init__()
        self.token_emb_table = nn.Embedding(vocab_size, vocab_size)
    
    def forward(self, idx,targets=None):
        logits = self.token_emb_table(idx)          # (batch, time ,channel)
        if targets is None:
            loss = None
        else:
            B,T,C = logits.shape
            logits = logits.view(B*T,C)             # cross entropy expects batch x channel x time
            targets = targets.view(B*T)
            loss = F.cross_entropy(logits, targets)
        return logits,loss
    
    def generate(self,idx,max_new):                 # idx -> (B,T) for current sequence
        for _ in range(max_new):
            logits,loss =self(idx)
            logits = logits[:,-1,:]                 # (B,C)
            probs = F.softmax(logits,dim=-1)
            idx_next = torch.multinomial(probs,1)   # (B,1)
            idx = torch.cat((idx,idx_next),dim=1)   # (B,T+1)
        return idx 
    
model = BigramModel(vocab_size)
model = model.to(device)
optimizer = torch.optim.AdamW(model.parameters(),lr = learning_rate) 

for iter in range(max_iters):
    if iter % eval_iters==0:
        losses = estimateLoss()
        print(losses.items())
    xb,yb = create_batch('train')
    
    logits,loss = model(xb,yb)
    optimizer.zero_grad(set_to_none=True)
    loss.backward()
    optimizer.step()


context = torch.zeros((1,1),dtype=torch.long,device=device)
print(decode(model.generate(context, max_new=500)[0].tolist())) 