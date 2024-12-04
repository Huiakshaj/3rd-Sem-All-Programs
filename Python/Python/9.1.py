# 9.1. Write a Python program that accepts an integer and determines whether it is greater than 4^4 and which is 4 mod 34.

def check_number(num):
    if num > 4**4 and num % 34 == 4:
        return True
    return False
number = int(input("Enter an integer: "))
result = check_number(number)
print("Result:", result)
