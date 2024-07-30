# doubly linked list
class Node:
    def __init__(self,data):
        self.data = data
        self.next = None
        self.prev = None
        
#create a list of user defined length
def createList():
    n = int(input("Enter the number of nodes: "))
    head = None
    tail = None
    for i in range(n):
        data = int(input("Enter the data: "))
        if head == None:
            head = Node(data)
            tail = head
        else:
            tail.next = Node(data)
            
            tail.next.prev = tail
            tail = tail.next
    return head

# insert a node before or after a given node

def insert(loc,node:Node = Node(),pos = 2):
    global head
    if(pos==1):
        temp = head
        while(temp.data!=loc):
            temp = temp.next
        temp.prev.next = node
        node.prev = temp.prev
        temp.prev = node
        node.next = temp
    else:
        temp = head
        while(temp.data!=loc):
            temp = temp.next
        temp.next.prev = node
        node.next = temp.next
        temp.next = node
        node.prev = temp
    return head

# delete a node

def delete(loc):
    global head
    temp = head
    while(temp.data!=loc):
        temp = temp.next
    temp.prev.next = temp.next
    temp.next.prev = temp.prev
    return head

#search a node
def search(loc):
    global head
    temp = head
    while(temp.data!=loc):
        temp = temp.next
    return temp

# print the list
def printList():
    global head
    temp = head
    while(temp!=None):
        print(temp.data)
        temp = temp.next
        