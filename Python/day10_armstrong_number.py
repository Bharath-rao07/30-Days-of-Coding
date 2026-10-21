
num = int(input("Enter a non-negative number: "))

if num < 0:
    print("Please enter a non-negative number.")
else:
    original = num

    # Count the digits
    digits = len(str(num))

    total = 0

    while num > 0:
        digit = num % 10
        total = total + digit ** digits
        num = num // 10

    if total == original:
        print(original, "is an Armstrong number.")
    else:
        print(original, "is not an Armstrong number.")
