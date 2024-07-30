import dis # disassemble module into bytecode
def loop(n):
    # needs to load list and append to it for each iteration
    x=[]
    for i in range(n):
       x.append(i)
    return x 

def list_comp(n):
    # can use list_append bytecode to append to list
    return [i for i in range(n)]

dis.dis(loop)
dis.dis(list_comp)