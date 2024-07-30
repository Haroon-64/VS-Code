import torch
x1, x2 = torch.Tensor([2.]).double(), torch.Tensor([0.]).double()
# by default every node is leaf node
x1.requires_grad, x2.requires_grad = True, True

w1, w2 = torch.Tensor([-3.]).double(), torch.Tensor([1.]).double()
w1.requires_grad, w2.requires_grad = True, True

b = torch.Tensor([6.88137]).double()
b.requires_grad = True

n = x1 * w1 + x2 * w2 + b
o = torch.tanh(n)

print(o.data.item())
o.backward()

print('\nx2', x2.grad.item())
print('w2', w2.grad.item())
print('x1', x1.grad.item())
print('w1', w1.grad.item())

#%%
