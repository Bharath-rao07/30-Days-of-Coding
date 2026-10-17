# day 06 : FACTORIAL OF THE NUMBER 

num=int(input("Enter a non negative number :"))

if num <0:
    print("please ,Enter the non negative number")


else:
    fact=1

    for i in range(1,num+1):
        fact=fact*i

print("The factorial of ", num ,"is " , fact)        

