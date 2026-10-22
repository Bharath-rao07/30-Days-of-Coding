# Day 11 : GREATEST COMMAN DIVISOR

num1=int(input("Enter the first non-negative number :  "))
num2=int(input("Enter the second non-negative number : "))

if num1 < 0 or num2 < 0 :
    print("please enter the non negative number !!")

elif num1==0 and num2==0 :
    print("GCD is undefined for the two zeros")


else:
    while num2!=0:
      reminder=num1%num2
      num1=num2
      num2=reminder

    print("GCD=",num1) 