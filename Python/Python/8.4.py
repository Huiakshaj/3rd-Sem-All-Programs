# 8.4. Write a function prodDigits() that inputs a number and returns the product of digits of that number.

def prodDigits():
    number = int(input("Enter a number : "))
    product = 1
    while number > 0:
        digit = number % 10
        product *= digit
        number //= 10
    print("Product of digits : ", product)
prodDigits()
