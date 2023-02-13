n=int(input('Enter the no of elements'))
stack=[]
arr=[]
j=0
top=-1
str=''
for i in range(0,n):
    top+=1
    stack.append(input('Enter the elements:'))

for i in range(n):
    arr.append(input('Enter the array elements'))

for i in range(n):
     temp=arr[i]
     count=1
     if(temp not in (str.split(" "))):
        s=stack.pop()
        while(s!=temp and j<n):
           str+=s+' '
           count+=1
           s=stack.pop()
        print(count)
     else:
        print(0)
