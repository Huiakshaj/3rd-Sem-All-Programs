# 7.5. Write a Python program to access a function inside a function.

def outerFunction():
	def innerFunction():
		return "This is wriiten in the inner function."
	return innerFunction()
print(outerFunction())
