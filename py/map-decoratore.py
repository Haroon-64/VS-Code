set = {1,2,3}
set2 = {3,4,5}
def function1():
    print(set | set2)


   
mapl=[1,2,3,4,5]

dour = map(lambda x : x*2,mapl)                           #apply function to each item dou
print(list(dour))                             #print result
filterl = filter(lambda x : x%3==0,mapl) 
print(list(filterl))                          #print result




def decorator_function(original_function): 
    def before():  
        print('wrapper executed this before {}'.format(original_function.__name__))  
        return original_function()
    return before

@decorator_function                           #add decorator to function

def display():
    print('display function ran')
display()


def add(x,y,z=0):                                   #default value for z
    return x+y+z
print(add(1,2))
print(add(1,2,3))

class Dog:
    def __init__(self,name,age):
        self.name=name
        self.age=age
    def speak(self):
        return self.name+" says woof!"
class Cat:
    def __init__(self,name,age):
        self.name=name
        self.age=age
    def speak(self):
        return self.name+" says meow!"

niko=Dog("niko",8)
felix=Cat("felix",12)
def __gt__(self,other):
    return True if self.age>other.age else False

print(niko>felix)                                   #compare objects

print(niko.speak())
print(felix.speak())

#function overloading  same function name different functionality
def add(x,y,z=0):                                   #default value for z
    return x+y+z
print(add(1,2))
print(add(1,2,3))


class tem:
    count=0
    def __init__(self,x=0,y=0):
        self.x=x
    def add(self,a):
        return self.x+a.x
    @classmethod     #self variable is of class
    def add1(cls):
        count +=1
    @staticmethod    #no self variable
    def add2():
        return 1+1
    

class tem1(tem):
    def __init__(self,x=0,y=0,z=0):
        super().__init__(x,y)   #call parent class constructor
        self.z=z
class tem2(tem):
    def __init__(self,x=0,y=0,z=None):   #none as mutable types cannot be default values as they are retained in memory
        super().__init__(x,y)  
        if z is None:
            self.z=[]   #default value
        else:
            self.z=z    
print(help(tem1))  # print all methods of class and resolution order 
#current class has higher priority than parent class

