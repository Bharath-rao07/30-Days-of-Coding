
number = int(input("Enter an integer: "))

number = abs(number)
count = 0

if number == 0:
    count = 1
else:
    while number > 0:
        count = count + 1
        number = number // 10

print("Number of digits =", count)
