# day 08 : REVERSING THE GIVEN NUMBER

num = int(input("Enter a non-negative nummber :" ))

if num < 0:
    print("please enter a non-negative number !!")

else :
    original=num
    rev =0

    while num > 0 :

        digit = num % 10
        rev=rev * 10 + digit
        num=num // 10

print("the reverse of ", original ," is ",rev)