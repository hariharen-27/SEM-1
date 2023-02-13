'''str1=input("enter the string in lower case")
print(str1.upper())'''

str2=input("enter the string")
ch2=""
for i in range(0,len(str2)):
    ch1=ord(str2[i])
    if(ch1>96 and ch1<123):
        ch2+=chr(ch1-32)
        
    else:
        ch2+=chr(ch1)
print(ch2)
        
        
