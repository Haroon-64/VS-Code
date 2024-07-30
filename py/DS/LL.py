

class Node:
    def __init__(self,x=None):
        
        self.data = x
        self.next = None
Head,Tail =None,None


def Create():
        global Head,Tail
        n = int(input("size"))
        while(n>0):
            temp = Node()
            if Head is None:
                Head = temp
                Tail = temp
            else:   
                Tail.next = temp
                Tail = temp
            temp.data = int(input("data"))
            n-=1
            
def Insert(loc,node:Node = Node(),pos = 2):
    """
    loc = location
    node = node to be inserted
    pos = 1 for before node
    pos = 2 for after node
    """
    global Head,Tail
    if(pos==1): # insert at begining
        
        tr = Head
        while (tr.data!=loc):
            tr = tr.next
        temp = tr.next
        tr.next = node
        node.next = temp
    else:
        
        tr = Head
        while (tr.data!=loc):
            tr = tr.next
        temp = tr.next
        tr.next = node
        node.next = temp
        if(tr==Tail):
            Tail = node

def Delete(loc,data):
        global Head,Tail
        temp = Head
        while(temp.data!=loc):
            temp = temp.next
        temp.next = temp.next.next
        if(temp==Tail):
            Tail = temp
        temp = temp.next
        if(temp.data==data):
            temp = temp.next
            Head = temp
        else:
            temp = temp.next
            while(temp.data!=data):
                temp = temp.next
            temp.next = temp.next.next
            if(temp.next==None):
                Tail = temp
                
            
def Print():
        global Head,Tail
        temp = Head
        while(temp!=Tail.next):
            print(f"{temp.data}",end="-> ")
            temp = temp.next
        print("\n")
        

Create()
x = int(input("data to be inserted"))
y =int(input("insert 1.before or 2.after"))
Insert(2,Node(x),y)


Print()
