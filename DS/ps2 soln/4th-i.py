n=int(input("enter the number"))
m=n
for i in range(1,n+1):
    for s in range(1,m):
        print(end=" ")
    for j in range(1,i+1):
        print(i,end="")
    for j in range(2,i+1):
        print(i,end="")
    m-=1
    print()

    
