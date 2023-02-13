cw = float(input("enter the  course work marks"))
we=float(input("enter the written examination marks"))
total=cw+we

if cw>=20 and we>=20:
    if total>=44:
        print("the student passed with ",total,"%")
    else:
        print("the student failed with",total,"%")
    
        

else:
    print("the student failed with ",total,"%")
    
