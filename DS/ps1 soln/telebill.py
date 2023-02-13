n_call=int(input("enter the number of calls"))
if n_call<100:
    print("the telephone bill amount is 50")
elif n_call>99 and n_call<200:
    print("the telephone bill amount is ", n_call*1)
elif n_call>199 and n_call<300:
    print("the telephone bill amount is ", n_call*2)
else:
    print("the telephone bill amount is ",n_call*3)
