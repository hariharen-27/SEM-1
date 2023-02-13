str1=input("enter the email")
count=0
at=0
for i in range (0,len(str1)):
    if(str1[i] in ('!' or '#' or '$' or '%' or '^' or '&' or '*' or '(' or ')' or '+' or '{' or '}' or '|' or '*' or '-' or '/')):
        print("invalid")
     
        break
  
        
    else:
        if(str1[i]=='@'):
            at+=1
        count+=1

    
if len(str1)==count and at==1:
    if ("@psgtech.ac.in" in str1) or ("@gmail.com" in str1):
        print()
        print("valid")
    else:
        print("invalid")

else:
    print("invalid")
