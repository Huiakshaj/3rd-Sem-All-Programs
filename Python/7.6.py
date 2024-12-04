# 7.6. Write a Python program to detect the number of local variables declared in a function.

def countVariables():
    x = 10
    name = "Akshaj"
    numbers = [1, 2, 3]
    print("This function has 3 local variables.")
    print("Variables:", list(locals().keys()))
countVariables()
