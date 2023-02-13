

def rbs(data,value,low,high):
    if low>high:
        print("value not in the array")
    else:
        mid =int((low+high)/2)
        if value == data[mid]:
            print(mid+1)
        elif value>data[mid]:
            rbs(data,value,mid+1,high)
        else:
            rbs(data,value,low,mid-1)
            
data=[7,9,11,15,17,23,46,75,98,101,113,115]
value=101
high=len(data)
low=0
rbs(data,value,low,high)
