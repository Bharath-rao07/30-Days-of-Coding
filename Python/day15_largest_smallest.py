
n = int(input("How many numbers do you want to enter? "))

if n <= 0:
    print("Please enter a positive count.")
else:
    numbers = []

    for i in range(n):
        number = int(input(f"Enter number {i + 1}: "))
        numbers.append(number)

    largest = numbers[0]
    smallest = numbers[0]

    for number in numbers:
        if number > largest:
            largest = number

        if number < smallest:
            smallest = number

    print("Largest number =", largest)
    print("Smallest number =", smallest)
