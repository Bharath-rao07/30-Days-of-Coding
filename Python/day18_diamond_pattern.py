
rows = int(input("Enter the number of rows for the top half: "))

if rows <= 0:
    print("Please enter a positive number of rows.")
else:
    print("\nDiamond Pattern:")

    # Top half, including the widest row
    for i in range(1, rows + 1):
        for j in range(rows - i):
            print(" ", end="")

        for j in range(2 * i - 1):
            print("*", end="")

        print()

    # Bottom half, without repeating the widest row
    for i in range(rows - 1, 0, -1):
        for j in range(rows - i):
            print(" ", end="")

        for j in range(2 * i - 1):
            print("*", end="")

        print()
