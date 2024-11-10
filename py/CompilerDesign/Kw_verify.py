kw = {"printf","scanf","if","else","do","while"}
while True:
    text = input("enter keyword\n")

    if text in kw:
        print("ok")
    else:
        print("keyword not found")


