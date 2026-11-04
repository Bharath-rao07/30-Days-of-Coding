rows = int(input("Enter the number of rows: "))

if rows <= 0:
    print("Please enter a positive number of rows.")
else:
    print("\nNumber Pyramid:")

    for i in range(1, rows + 1):

        for j in range(rows - i): # This prints the spaces
            print(" ", end="  ")

        for j in range(1, i + 1):  # This prints the numbers 
            print(j, end=" ")

        print()
