# day 05 : SUM OF NATURAL NUMBERS 

num=int(input("enter the positive number : "))

if num<0:
    print(" Please enter the positive number only")
else:
    total=0

    for i in range (1,num+1):
        total=total+i
print("The sum of numbers from 1 to ",num , "is :", total)          