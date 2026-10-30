rows = int(input("Enter the number of rows: "))

if rows <= 0:
    print("Please enter a positive number of rows.")
else:
    print("\nButterfly Pattern:")

    # Upper half
    for i in range(1, rows + 1):

        # Left stars
        for j in range(i):
            print("*", end="")

        # Middle spaces
        for j in range(2 * (rows - i)):
            print(" ", end="")

        # Right stars
        for j in range(i):
            print("*", end="")

        print()

    # Lower half
    for i in range(rows - 1, 0, -1):

        # Left stars
        for j in range(i):
            print("*", end="")

        # Middle spaces
        for j in range(2 * (rows - i)):
            print(" ", end="")

        # Right stars
        for j in range(i):
            print("*", end="")

        print()