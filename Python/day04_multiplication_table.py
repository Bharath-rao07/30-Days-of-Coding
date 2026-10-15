# Day 04 : Multiplication Table


number=int(input("Enter the number :"))

print("Multiplication Table of number ",number)

for i in range (1,11):
    print(number,"x", i ,"=" ,number*i)
    