arr=[12,2,5,7,55,88,-90]
pos=0
neg=0
odd=0
even=0
for i in range(0,len(arr)):
    if(arr[i]>0):
        pos+=1
    elif(arr[i]<0):
        neg+=1
    if(arr[i]%2==0):
        even+=1
    elif(arr[i]%2!=0):
        odd+=1
print("positive number is",pos)
print("negative number is",neg)
print("odd number is",odd)
print("even number is",even)
