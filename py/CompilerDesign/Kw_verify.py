from keyword import kwlist

def verify_keyowrd(string:str):
    text = input("enter keyword\n")

    if text in kwlist:
        return 1
    else:
        return 0


if __name__ == "__main__":
    while True:
        text = input("enter keyword")
        if verify_keyowrd(text) == 1:
            print("valid\n")
        else:
            print("invalid")