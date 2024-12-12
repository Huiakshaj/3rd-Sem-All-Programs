# 7.2. Write a Python function to multiply all the numbers in a list.

def multiplyList(givenList):
	result=1
	for num in givenList:
		result *=num
	return result
givenList=[8, 2, 3, -1, 7]
print(givenList)
print("The result of the list is :",multiplyList(givenList))


def multiplyList(givenList):
    result = 1
    for num in givenList:
        result *= num
    return result

# Taking user input
user_input = input("Enter numbers separated by spaces: ")
# Converting input string to a list of integers
givenList = list(map(int, user_input.split()))

print("The list you entered is:", givenList)
print("The result of the list is:", multiplyList(givenList))
