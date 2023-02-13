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

for i in range(row):
    for j in range(col):
        if arr[i][j]==0:
            zero+=1
if ((row*col)/2)<=zero:
    print("this is a sparse matrix")
else:
    print("this is not a sparse matrix")
    
            






    
