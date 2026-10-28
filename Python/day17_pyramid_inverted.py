
rows = int(input("Enter the number of rows: "))

if rows <= 0:
    print("Please enter a positive number of rows.")
else:
    print("\nPyramid Pattern:")

    for i in range(1, rows + 1):
        for j in range(rows - i):
            print(" ", end="")

        for j in range(2 * i - 1):
            print("*", end="")

        print()

    print("\nInverted Pyramid Pattern:")

    for i in range(rows):
        for j in range(i):
            print(" ", end="")

        for j in range(2 * (rows - i) - 1):
            print("*", end="")

        print()
