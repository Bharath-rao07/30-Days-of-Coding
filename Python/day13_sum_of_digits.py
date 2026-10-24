
number = int(input("Enter a number: "))

number = abs(number)
digit_sum = 0

while number > 0:
    digit = number % 10
    digit_sum = digit_sum + digit
    number = number // 10

print("Sum of digits =", digit_sum)
