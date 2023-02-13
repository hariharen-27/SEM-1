arr=[]
row=int(input("enter the rows"))
col=int(input("enter the columns"))
arr=[]
zero=0
for i in range (row):
    a=[]
    for j in range(col):
        a.append(int(input()))
    arr.append(a)
sum=arr[0][0]+arr[row-1][0]+arr[0][col-1]+arr[row-1][col-1]
print(sum)
print(arr[0][0], arr[row-1][0] ,arr[0][col-1], arr[row-1][col-1])
