arr=[2,4,6,8,12,23,36,58,69,70]
n=len(arr)
low =0
high=n-1
value=12

while(low<=high):
    mid=int((high+low)/2)
    if(arr[mid]>value):
        high=mid-1
    elif(arr[mid]<value):
        low=mid+1
    else:
        print(mid+1)
        break
