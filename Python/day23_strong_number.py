# DAY 23 : CHECKING STORNG NUMBER 

num = int(input("Enter the number : "))

original = num
sum = 0

if num < 0:
    print("Please enter a non-negative number.")

else:
    while num > 0:
        digit = num % 10

        factorial = 1

        for i in range(1, digit + 1):
            factorial = factorial * i

        sum = sum + factorial

        num = num // 10

    if sum == original:
        print(original, "is a Strong Number.")
    else:
        print(original, "is not a Strong Number.")
