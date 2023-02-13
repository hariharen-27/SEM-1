s=input("enter the string ")
count=0
for i in range (0,len(s)):
    if(s[i]==" "):
        count+=1
        continue
    if(count>1):
        print(" " + s[i],end="")
        count=0
    else:
        print(s[i],end="")
