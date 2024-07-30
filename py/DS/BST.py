root = None
class Node:
    def __init__(self,x=None):
        self.data = x
        self.left = None
        self.right = None

def Create():
    n = int(input("size"))
    root = Node()
    root.data = int(input("data"))
    while(n>1):
        temp = Node()
        temp.data = int(input("data"))
        tr = root
        while(True):
            if(temp.data<tr.data):
                if(tr.left is None):
                    tr.left = temp
                    break
                else:
                    tr = tr.left
            else:
                if(tr.right is None):
                    tr.right = temp
                    break
                else:
                    tr = tr.right
        n-=1
    return root

def Pre(root):
    if(root is None):
        return
    print(root.data,end=" ")
    Pre(root.left)
    Pre(root.right)
BST = Create()
Pre(BST)