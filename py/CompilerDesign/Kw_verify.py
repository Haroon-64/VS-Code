import keyword

kw = keyword.kwlist
while True:
    text = input("enter keyword\n")

    if text in kw:
        print("ok")
    else:
        print("keyword not found")