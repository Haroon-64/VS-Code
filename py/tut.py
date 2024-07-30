import math
import random                       #import library "random"      library_>predefined code
from functools import reduce


mytuple = ("apple", "banana", "cherry")
myit = iter(mytuple)  #iter() returns an iterator from an iterable

print(next(myit))
print(next(myit))
print(next(myit))  #next() returns the next item in an iterable


def function_name():               #defining function called "function name" 
   
    variable1 = "string"            #creating a variable of data type string/collection of charectors called variable1 
    variable2 = 1                   #creating a variable of data type number/integer of charectors called variable2
    variable3 = input("text")       #variable3 created and value inpuet by user + prints prompt text
    variable4 = ["a","b","c"]       #variable4 is list of strings with 3 items a,b,c   List-> variable with multiple items 
    return variable4                #what the function will return when called, () optional

x = function_name()                 #calling function and storing in x
print(x)                            #printing value in x

dict = {"key" : "value", "key2" : x}             #defining 2 pair dictionary where a  key is asociated with a value----- key=value , key2=variable x
#---------------------------------------------------------------------------------------------------------------------------------------------------
print(dict)                                     #print dictionary as 'key_name' : 'value_name'
print(dict["key2"])                             #print value associated with key2
variable4 = ["a","b","c"]
y = random.choice(variable4)                    #y = random element from list variable4
print(y)                                        #print random number

def compare(x,y):                     #define function compare with two inputs x,y          
   
    if x>y:         
        return x
    elif x<y :                         # == mean check while = mean assign
        return y
    else :                             #if else ladder statement
        return "equal"
        
a=input("NUMBER 1")
b=input("number 2")
c= compare(a,b)                     #send a,b to x,y in defined function compare

print("name " + y)                  #print name *variable*
l=4
print(f"statement {l} statment")    #print variable + string using fstring  f"statement {variable_name}" 

type(y)                             
print(type(y))                      #print data type of variable y
print(type(y)==str)                 #print if data type of variable y is string
#or 
print(isinstance(y,str))         #print if data type of variable y is string
#data types   complex, bool, float, int, str, list, tuple, dict, set, range
x**2                                #exponential
x//2                                #floor division-divide and return integer part of the quotient
#binary operators  &,|,^,>>,<<,~
#is operator checks if two variables are equal
#in operator checks if a variable is in a list

#compare(x,y)
#ternary operator
#condition ? true : false    //////////return true if {condition is} true else  false
print("""text
l2
""")             #print text in multiple lines
def print_format(): 
    print('text'.upper())                 #print text in upper case without modfying original text
    print('text'.lower())                 #print text in lower case
    print('text'.capitalize())            #print text in capitalized case
    print('text'.title())                 #print text in title case
    print('text'.swapcase())              #print text in swap case
    print('text'.count('t'))              #print number of times 't' appears in text
    print('text'.find('t'))               #print index of first occurence of 't' in text
    print('text'.replace('t','T'))        #print text with 't' replaced with 'T'
    print('text'.split('t'))              #print list of substrings split at 't'
    print('text'.isalpha())               #print if text is alphabetic
    print('text'.isalnum())               #print if text is alphanumeric(character and number and not empty)
    print('text'.isdigit())               #print if text is a digit
    print('text'.startswith('t'))         #print if text starts with 't'
    print('text'.endswith('t'))           #print if text ends with 't'
    print('a'.join(['t','e','x','t']))      #print text joined with a
    print('text'.isidentifier())          #print if text is an identifier
    print(len('text'))                    #print length of text
    print('text'.index('t'))              #print index of first occurence of 't' in text
    print('text'.isprintable())           #print if text is printable
    print('text'.isspace())               #print if text is a space
    print('text'.endswith('t'))           #print if text ends with 't'
    print('text'.startswith('t'))         #print if text starts with 't'
    print("e" in "text")                  #print if 'e' is in 'text'
    print("text\!")                       #print text with ! (\special character))

strin = "text"
print(strin[0])                         #print first character of string

print(strin[1:3])                       #print characters from index 1 to 3
print(strin[1:])                        #print characters from index 1 to end
print(strin[:3])                        #print characters from index 0 to 3
print(strin[-1])                        #print last character of string
def math():
    #boolean     True, False (numbers are true except 0)(emoty stringd are false)
    o =1
    p= 2
    print( any([o,p]))                       #print if any of the values are true
    print( all([o,p]))                       #print if all of the values are true
    print( not o)                            #print if o is false

    compl = 1+2j                          #complex number (a+bj)
    y = complex(1,2)                        #complex number (a+bj)
    print(complex.real)                     #print real part of complex number
    print(complex.imag)                     #print imaginary part of complex number
    print(complex.conjugate())              #print conjugate of complex number

    abs(-1)                                 #absolute value of number
    pow(2,3)                                #power of number
    round(2.3)                              #round number
    round(2.3,1)                            #round number to 1 decimal place
    min(1,2,3)                              #minimum of numbers
    max(1,2,3)                              #maximum of numbers
    sum([1,2,3])                            #sum of numbers
    divmod(5,2)                             #quotient and remainder of division

from enum import Enum                        #import enum module
class Color(Enum):                           #define enum class   (enum class is a class with fixed set of values)
    RED = 1                                  #define enum values
    GREEN = 2
print(Color.RED.value)                             #print enum value
print(Color.RED.name)                              #print enum name
print(Color(1)).value                                    #print enum name from value
print(Color['RED'])                                #print enum value from name
def lists():    
    list1 = [1,2,3,4,5,"string"]                   #define list
    list2 = [1,2,3,4,5,"string"]                   #define list
    list1.append(6)                                 #append 6 to list    # list operations are inplace and dont return anything  l = l2.append(6) will make l = None
    list1.insert(0,0)                               #insert 0 at index 0
    list1.extend([7,8,9])                           #extend list with [7,8,9]
    list1 += [10,11,12]                             #extend list with [10,11,12]
    list1.remove(0)                                 #remove 0 from list  
    list1.pop(0)                                    #remove element at index 0 from list and return it
    list1.clear()                                   #clear list
    list1.index(1)                                  #return index of 1 in list
    list1.count(1)                                  #return number of times 1 appears in list
    list1.sort()                                    #sort list (only works if all elements are of same type) [upper case letters are sorted before lower case letters]
    list1.sort(key=str.lower)                       #sort list ignoring case  [sorting modifies original list]
    list1.reverse()                                 #reverse list
    list1.copy = list2[:]                                    #copy list to list2
    list1 = list1 + [1,2,3]                         #concatenate list with [1,2,3]
    list1 = list1 * 2                               #concatenate list with itself
    print( 1 in list1)                            #print if 1 is in list
    print( list1[2])                              #print element at index 2
    list1[1:1] = [0,3]                               #insert [0,3] at index 1
    #work similar to strings
    a,b,c,*x,d = [1,2,3,4,5,6,7,8]      # assign some values and keep other((middle)) in list
    numbers=[1,2,3,4,5,6,7,8,9,10]
    print(sorted(numbers ,key=str.lower))                              #return sorted list without modifying original list
    print(numbers)                                                    #print original list
    print(numbers.sort())                                             #sort list and return None

    #tupples are immutable\non-modifiable lists
def tupples():

    tupple1 = (1,2,3,4,5,"string")                   #define tupple
    tupple1 = tupple1 + (1,2,3)                      #concatenate tupple with (1,2,3)
    tupple1 = tupple1 * 2                            #concatenate tupple with itself
    print( 1 in tupple1)                            #print if 1 is in tupple
    print( tupple1[2])                              #print element at index 2
    tupple1[1:1] = [0,3]                               #insert [0,3] at index 1
    #work similar to strings
    len.tupple1()                                    #return length of tupple     #len(list1) returns length of list
    
    #dictionaries are key:value pairs
def dictionaries():

    dict1 = {'a':1,'b':2,'c':3}                      #define dictionary  (keys must be unique)      key : value    key can be any immutable type    value can be any type  
    dict1['d'] = 4                                   #add key:value pair
    dict1['a'] = 5                                   #change value of key 'a'
    dict1.update({'e':5})                            #add key:value pair
    dict1.pop('a')                                   #remove key:value pair
    dict1.popitem()                                  #remove last key:value pair
    dict1.clear()                                    #clear dictionary
    dict1.copy()                                     #return copy of dictionary
    dict1.keys()                                     #return list of keys
    dict1.values()                                   #return list of values
    dict1.items()                                    #return list of key:value pairs
    dict1.get('a')                                   #return value of key 'a'
    dict1.setdefault('a',1)                          #return value of key 'a' if it exists else add key:value pair and return value
    dict1.fromkeys(['a','b','c'],1)                  #return dictionary with keys ['a','b','c'] and values 1
    print(list(dict1.keys))                          #print list of keys
    print('a' in dict1)                              #print if key 'a' is in dictionary
    print(dict1['a'])                                #print value of key 'a'
    print(dict1.get('a'))                            #print value of key 'a'
    print(dict1.get('a',1))                          #print value of key 'a' if it exists else return 1(default value)
    print(dict1.setdefault('a',1))                   #print value of key 'a' if it exists else add key:value pair and return value
    print(dict1.setdefault('a',2))                   #print value of key 'a' if it exists else add key:value pair and return value
    print(dict1)                                     #print dictionary
    print(dict1.setdefault('a',2))                   #print value of key 'a' if it exists else add key:value pair and return value
    print(dict1)                                     #print dictionary
    print(dict1.setdefault('a',3))                   #print value of key 'a' if it exists else add key:value pair and return value
    print(dict1)                                     #print dictionary
    print(dict1.setdefault('a',4))                   #print value of key 'a' if it exists else add key:value pair and return value
    print(dict1)                                     #print dictionary
    del dict1['a']                                   #remove key:value pair
    dict2 = dict1.copy()                             #copy dictionary to dictionary2
    
#sets   
# sets are unordered collections of unique elements    ~mathematical sets
def sets():
 
    set1 = {1,2,3,4,5}                               #define set
    set1.add(6)                                      #add 6 to set
    set1.update([7,8,9])                             #add [7,8,9] to set
    set1.remove(1)                                   #remove 1 from set
    set1.discard(2)                                  #remove 2 from set
    set1.pop()                                       #remove random element from set
    set1.clear()                                     #clear set
    set1.copy()                                      #return copy of set
    set1.union({1,2,3})                              #return union of set1 and {1,2,3}
    set1.update({1,2,3})                             #update set1 with union of set1 and {1,2,3}
    set1.intersection({1,2,3})                       #return intersection of set1 and {1,2,3}
    set1.intersection_update({1,2,3})                #update set1 with intersection of set1 and {1,2,3}
    set1.difference({1,2,3})                         #return difference of set1 and {1,2,3}
    set1.difference_update({1,2,3})                  #update set1 with difference of set1 and {1,2,3}
    set1.symmetric_difference({1,2,3})               #return symmetric difference of set1 and {1,2,3}
    set1.symmetric_difference_update({1,2,3})        #update set1 with symmetric difference of set1 and {1,2,3}
    set1.issubset({1,2,3})                           #return if set1 is subset of {1,2,3}
    set1.issuperset({1,2,3})                         #return if set1 is superset of {1,2,3}
    set1.isdisjoint({1,2,3})                         #return if set1 is disjoint with {1,2,3}
    set1 = {1,2,3,4,5}
    set2 = {1,2,3}

    print(set1.union(set2))                          #return union of set1 and set2
    print(set1 | set2)                               #return union of set1 and set2
    print(set1 & set2)                               #return intersection of set1 and set2
    print(set1 - set2)                               #return difference of set1 and set2
    print(set1 ^ set2)                               #return symmetric difference of set1 and set2
    print(set1 <= set2)                              #return if set1 is subset of set2
    print(set1 >= set2)                              #return if set1 is superset of set2

    

#objects
#" . "access attributes and methods/functions related to object
print(id(object))                                   #print id of object
item = [1,2,3]
for i in item:                                    #loop through object
    print(i)

for i in range(len(item)):                        #loop through object
    print(item[i])

for i,j in enumerate(item):                       #print index and value of object
    print(i,j)

#break and continue
for i in range(10):
    if i == 5:
        break                                   #break out of loop
    print(i)

for i in range(10):
    if i == 5:
        continue                              #skip current iteration
    print(i)

#classes    USER DEFINED OBJECTS
class ClassName1:
    def __init__(self,variable1,variable2):     #define class     self is instance of class    __init__ is constructor of class  variables are attributes of class
        #whenever class is called self is passed as first argument ie the object is passed as first argument
        self.variable1 = variable1              #define attributes of class
        self.variable2 = variable2             
        #code
        def method2(self):                          #define method
            x=1

#values can be changed or deleted
del object.attribute1
#inheritance  inherit attributes and methods from parent class
class ClassName2(ClassName1):                     #define class that inherits from ClassName2
    def __init__(self,variable1,variable2):     #define class 
        super().__init__(variable1,variable2)   #call __init__ of ClassName1
        #code


#create iteravle object
class MyNumbers:
  def __iter__(self):   #iterable object must have __iter__ method  similar to __init__ method
    self.a = 1
    return self

  def __next__(self):   #iterable object must have __next__ method to return next value in iterable
    x = self.a
    self.a += 1
    return x
# raise StopIteration can be used to stop iteration
myclass = MyNumbers()
myiter = iter(myclass)

print(next(myiter))
print(next(myiter))
print(next(myiter))
print(next(myiter))
print(next(myiter))
#modules   python files
#import code from other files
import test    

from lib import function1                       #import function1 directly from test.py in lib folder

test.function1()                                 #call function1 from test.py  
#if file is in subfolder create __init__.py file in subfolder and import from subfolder
#innit.py file can be empty or contain code to run when imported
#it tells python that folder is a package/modules folder
#standard library  https://docs.python.org/3/library/index.html
#third party libraries  https://pypi.org/
def libr(): # common standard libraries  
        #sqlite3 database library https://docs.python.org/3/library/sqlite3.html
        #statistics library https://docs.python.org/3/library/statistics.html
        #requests library https://docs.python.org/3/library/urllib.request.html
        
        #os  operating system  https://docs.python.org/3/library/os.html
        #sys  system specific parameters and functions  https://docs.python.org/3/library/sys.html
        #math  math functions  https://docs.python.org/3/library/math.html
        #random  random number generator  https://docs.python.org/3/library/random.html
        #datetime  date and time https://docs.python.org/3/library/datetime.html
        #collections  collections of data  https://docs.python.org/3/library/collections.html
        #itertools  iterators for efficient looping  https://docs.python.org/3/library/itertools.html
        #functools  functional programming tools  https://docs.python.org/3/library/functools.html
        #threading  threading module  https://docs.python.org/3/library/threading.html
        #multiprocessing  multiprocessing module  https://docs.python.org/3/library/multiprocessing.html
        #subprocess  subprocess module  https://docs.python.org/3/library/subprocess.html
        #socket  socket module  https://docs.python.org/3/library/socket.html
        #json  json module  https://docs.python.org/3/library/json.html
        #csv  csv module  https://docs.python.org/3/library/csv.html 
        #re  regular expressions https://docs.python.org/3/library/re.html
        #logging  logging   https://docs.python.org/3/library/logging.html
        #argparse  command line arguments https://docs.python.org/3/library/argparse.html
        #configparser  configuration files https://docs.python.org/3/library/configparser.html
        #unittest  unit testing  https://docs.python.org/3/library/unittest.html
        #doctest  doctest module  https://docs.python.org/3/library/doctest.html
        #pdb  pdb module  https://docs.python.org/3/library/pdb.html 
        #timeit  timeit module  https://docs.python.org/3/library/timeit.html
        #traceback  traceback module  https://docs.python.org/3/library/traceback.html
        #tkinter  tkinter module  https://docs.python.org/3/library/tkinter.html
        #urllib  urllib module  https://docs.python.org/3/library/urllib.html
        #email  email module  https://docs.python.org/3/library/email.html
        #http  http module  https://docs.python.org/3/library/http.html
        #xml  xml module  https://docs.python.org/3/library/xml.html
        x=0
#lambda functions  anonymous functions
#lambda functions are functions that are not bound to a name
#lambda functions are used to create small anonymous functions
#lambda functions are used when an argument is expected
#lambda functions are used inside other functions
#lambda functions are used when a function is used as an argument to a higher order function

la=lambda x: x+1                                 #lambda function that adds 1 to x
print(la(1))                                     #call lambda function


#documentation  docstrings
#docstrings are used to document functions
"""This is a docstring."""
print(help(display))                          #print docstring
#annotations  type hints
def add(a: int, b: int) -> int:                #input and return(->) type hints  ignore by python   mypy 3rd party library can check type hints and produce error
    return a + b 

#exceptions  errors
try:
    #code that may cause error
    x=y
except:                                         #catch all exceptions     except <error>: for specific error                               
    #code to run if error occurs
    x=y+1
else:
    #code to run if no error occurs
    print("no error")
finally:
    #code to run regardless of error
    x=y+3

try:
    raise Exception("error")                        #raise exception   can be defined as a class or a string
except Exception as error:
    print(error)                                        #print exception


class MyError(Exception):                           #define exception as a class
    pass                                    #pass is used to define an empty class/function


file=open("file.txt","r")                           
content=file.read()                                
print(content)                                    
file.close()    

with open("file2.txt","r") as file:                  #with  implicitly closes file
    content=file.read()                            
    print(content)
#list comprehension  create list from iterable
list=[1,2,3,4,5]
newlist=[x*2 for x in list]                         #create new list from list   
print(newlist)
#polymorphism  same function name different functionality


if __name__ == "__main__":      #run code only if file is run directly and not imported
    print("run directly") 