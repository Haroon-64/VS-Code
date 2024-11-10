"""
q0 a-> q1 b-> q3 a-> qf
"""


def parse(x:str):
    state = 0
    for c in x:
        if c == 'a' and state ==0:
            state = 1
            continue
        else:
            return False

        if :


s = input("enter string")

print(parse(s))