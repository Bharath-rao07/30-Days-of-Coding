# DAY 22 : CHECKING WHETHER THE GIVEN NUMBER IS PERFECT OR NOT 

num=int(input("Enter the number:"))

if num<=0:
    print("Please enter a positive value")

else:
    sum=0

    for i in range (1,num):
         if num%i==0:
             sum=sum+i


    if num==sum:
        print(num," is a perfect number ")

    else:
        print(num," is not a perfect number ")    


