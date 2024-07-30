import functools                          #for reduce function


#functions  code that runs when called
def functions(variable = 1):                         #define function with default value of variable = 1 default values are evaluated at function definition time only once
    #code
    #variable changes are local to function unless returned or for muutable types
    return variable  #doesnt print variable

def funtions2(variable = None):                         #define function with default value of variable = 1 default values are evaluated at function definition time only once
    if variable is None:                                #check if variable is None
        variable = []                                   #if variable is None set variable to empty list since lists are mutable
    #variable changes are local to function unless returned or for muutable types
    print(variable)  #prints variable
#nested functions
def nested_functions():
    variable1 = 1
    def nested():
        nonlocal variable1                         #use variable1 from outer function
        #code
        nested()                                #call nested function  local to nested_functions

#closure  function that returns another function     
def closure():
    variable1 = 1
    def nested():
        nonlocal variable1                         #use variable1 from outer function
        #code
        return variable1
    return nested()                                 #return nested function 




#functions can return any objects
def a(x):
    return x[1:3]

#map function  apply function to each item in iterable
mapl=[1,2,3,4,5]

dour = map(mapl,lambda x : x*2)                           #apply function to each item dou        map(value,function)
print(list(dour))                             #print result
#filter function  filter items in iterable
fl=[1,2,3,4,5]
filter=filter(fl,lambda x : x%2==0)                 #filter items that are even
#reduce function  reduce items in iterable to single value
redul=[1,2,3,4,5]
r = reduce(redul,lambda x,y : x+y)              #reduce list to single variable r ie sum of list

#factorial function
def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n-1)
fac=factorial(input("enter number: "))         #by default recursive functions are limited to 1000 iterations


#arbituary arguments
def make_pizza(*toppings):
    """Print the list of toppings that have been requested."""
    print(toppings)

make_pizza('pepperoni')
make_pizza('mushrooms', 'green peppers', 'extra cheese')

#arbituary keyword arguments
def build_profile(first, last, **user_info):
    """Build a dictionary containing everything we know about a user."""
    profile = {}
    profile['first_name'] = first
    profile['last_name'] = last
    for key, value in user_info.items():
        profile[key] = value
    return profile

user_profile = build_profile('albert', 'einstein',  location='princeton',  field='physics')              #keyword = value
print(user_profile)


#default values
def make_pizza(x=4)  :                       #default value if no argument is passed
    print(x)


#decorators  add functionality to existing functions                         #PENDING!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
def deco(func):
    def inner(*args, **kwargs):          #*args and **kwargs allow for arbituary arguments incase function has more than one argument
        func(*args, **kwargs)  
        print('running inner()')
    return inner

@deco                              #decorator used to call function inside another function 
def target():
    print('running target()')

target()



def display():
    print('display function ran')
    """This is a docstring."""
display()

#pass
def function(args):
    pass                                     #pass is used to skip a function or a block of code that is not yet implemented


import platform

x = platform.system()                    #platform.system() returns the system/OS name in string format
print(x)
print(type(x))


x2 = dir(platform)    #dir() returns a list of all the properties and methods of the specified object, without the values.
print(x2)



import datetime

x = datetime.datetime.now()

print(x.year)
 
print(x.strftime("%A"))     # %A = full weekday name %a = short weekday name    %B = full month name %b = short month name %d = day of month %m = month number %y = year %H = hour %M = minute %S = second %f = microsecond %p = AM/PM %j = day of year %U = week number of year %W = week number of year %c = local date and time %x = local date %X = local time %Z = timezone %z = UTC offset %G = ISO year %u = ISO weekday %V = ISO week number 
# string format time strftime

yx = datetime.datetime(2020, 5, 17)


