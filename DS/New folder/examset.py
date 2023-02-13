txt="passion"
for i in range(0,len(txt)):
    if(i+1)%2!=0:
        print(txt[i].upper(),end="")
    else:
        print(txt[i],end="")
