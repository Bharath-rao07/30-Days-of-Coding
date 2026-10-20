# day 09 : PALINDROME CHECKER

num=int(input("Enter a number : "))

if num<0:
    print("Please enter a non-negative number !!")

else:
    original=num
    rev=0

    while(num>0):
        digit=num%10
        rev=rev*10+digit
        num=num//10

if original==rev:
    print("The entered number is palindrome")
else:
    print("The entered number is not a palindrome ")    
