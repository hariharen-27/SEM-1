
while True:
    n=int(input("enter the input"))
    if n<=100:
        if n%3==0 and n%5==0 and n%7==0:
            break
        print(n)
    else:
        print("enter number below 100")
        break
