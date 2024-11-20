from keyword import kwlist

while True:
    text = input("enter keyword\n")

    if text in kwlist:
        raise "invalid identifer"
    if not text[0].isalnum():
        raise "cannot start with number or special char"

    i=1
    while i<len(text):
        if text[i].isalpha() or text[i]=='_':
            i+=1
            continue
        else:
            raise "invalid"



    