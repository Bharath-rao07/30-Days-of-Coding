
rows = int(input("Enter the number of rows: "))

if rows <= 0:
    print("Please enter a positive number of rows.")
else:
    print("\nPattern 1: Star Triangle")

    for i in range(1, rows + 1):
        for j in range(1, i + 1):
            print("*", end=" ")
        print()

    print("\nPattern 2: Number Triangle")

    for i in range(1, rows + 1):
        for j in range(1, i + 1):
            print(j, end=" ")
        print()

    print("\nPattern 3: Repeated-Number Triangle")

    for i in range(1, rows + 1):
        for j in range(1, i + 1):
            print(i, end=" ")
        print()
