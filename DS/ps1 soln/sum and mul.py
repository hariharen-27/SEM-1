n=int(input("enter the number"))
r=0
sums=0
mul=1

while n!=0:
    dig=n%10
    r=r*10+dig
    sums+=dig
    mul*=dig
    n=n//10
print(r,"reversed number")
print(sums,"sum of digit")
print(mul,"multiplication")
