# DAY 21: printing the floyd's triangle

value=int(input("Enter the number of rows : "))

if value <=0:
    print("Please enter the positive value !!")

else:
    print("The floyds triangle is :  ")

    num=1

    for i in range(1,value+1):
        for j in range(1,i+1):
            print(num,end="  ")
            num=num+1

        print()            