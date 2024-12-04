# 8.3. Write a function that converts a decimal number to a binary number.

def decimalBinary():
    n = float(input("Enter a decimal number : "))
    binary = ""
    if n == 0:
        print("Binary : ", "0")
        return
    while n > 0:
        binary = str(n % 2) + binary
        n = n // 2
    print("Binary:", binary)
decimalBinary()
