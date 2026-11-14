
n = int(input("Enter the number of terms: "))

a = 0
b = 1

if n <= 0:
    print("Please enter a positive number of terms.")

else:
    print("Fibonacci Series:")

    for i in range(n):
        print(a, end=" ")

        next_term = a + b

        a = b
        b = next_term
