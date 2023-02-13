n=int(input("enter no of elements"))
sums=0
for i in range(1,n+1):
    num=int(input("enter the numbers"))
    sums+=num
    if num==0:
        break
print(sums)
