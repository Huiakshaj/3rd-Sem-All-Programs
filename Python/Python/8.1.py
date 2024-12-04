# 8.1. Write a function that inputs a number and prints the multiplication table of that number.

def multiplicationTable():
    number = int(input("Enter a number : "))
    for i in range(1, 11):
        print(f"{number} x {i} = {number * i}")
multiplicationTable()
