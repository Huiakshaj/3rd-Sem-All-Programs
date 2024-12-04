# 7.2. Write a Python function to multiply all the numbers in a list.

def multiplyList(givenList):
	result=1
	for num in givenList:
		result *=num
	return result
givenList=[8, 2, 3, -1, 7]
print(givenList)
print("The result of the list is :",multiplyList(givenList))
