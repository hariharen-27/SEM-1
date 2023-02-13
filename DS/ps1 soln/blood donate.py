age=int(input("enter your age"))
weight = int(input("enter your weight"))
if age>18 and age<55:
    if weight>45:
        print("you are eligible to donate blood")
    else:
        print("you are not eligible to donate blood")
else:
    print("you are not eligible to donate blood")
