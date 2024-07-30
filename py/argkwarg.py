x = [i for i in range(10)]

print(*x) # unpacking operator


def f(*a, **kw):
    print(a) # tuple
    print(kw) # dict
    
f(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15, name='John', age=20, city='London') # positional args, keyword args
f('John', 20, 'London') # args