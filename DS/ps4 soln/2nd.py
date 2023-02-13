arr=[]
lar=0
a=int(input("enter the number of elements"))
for i in range(a):
    arr.append(int(input("enter the array elements")))
j=a
f=a-1
while(j):
    for i in range(f):
        if arr[i]>arr[i+1]:
            temp=arr[i]
            arr[i]=arr[i+1]
            arr[i+1]=temp
    j=j-1
print("ascending")
for i in range(a):
    print(arr[i])
print("decending")
for i in range(a-1,-1,-1):
    print(arr[i])
