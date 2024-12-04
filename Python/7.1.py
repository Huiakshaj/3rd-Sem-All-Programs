# 7.1. Write a Python function to find the Max of three numbers.

def maxThree(a,b,c):
	return max(a,b,c)
num1 = int(input("Enter the first number : "))
num2 = int(input("Enter the second number : "))
num3 = int(input("Enter the third number : "))
print("The maximum of the three numbers is :",maxThree(num1,num2,num3))
