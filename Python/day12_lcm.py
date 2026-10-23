
def find_gcd(a, b):
    while b != 0:
        remainder = a % b
        a = b
        b = remainder

    return a


first = int(input("Enter the first non-negative number: "))
second = int(input("Enter the second non-negative number: "))

if first < 0 or second < 0:
    print("Please enter non-negative numbers.")

elif first == 0 or second == 0:
    print("LCM =", 0)

else:
    gcd = find_gcd(first, second)
    lcm = (first // gcd) * second

    print("GCD =", gcd)
    print("LCM =", lcm)
