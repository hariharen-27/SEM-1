n=int(input("enter the width"))
str1="abcdefghijklmnopqrstuvwxyz"
for i in range(0,len(str1)):
    print(str1[i],end="")
    if((i+1)%n==0):
        print()
        
