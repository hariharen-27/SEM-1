arr=[]

a=int(input("enter the number of elements"))
for i in range(a):
    val=(int(input("enter the array elements")))
    arr.append(val)
for i in range(0,a):
    if arr[i]>arr[i+1]:
        temp=arr[i]
        arr[i]=arr[i+1]
        arr[i+1]=temp
    
print(arr[-2])