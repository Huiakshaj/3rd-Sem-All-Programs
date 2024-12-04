# 7.3. Write a Python function that accepts a string and calculates the number of uppercase letters and lowercase letters.

def countCase(s):
	upprCount=sum(1 for char in s if char.isupper())
	lwerCount=sum(1 for char in s if char.islower())
	return upprCount, lwerCount
userInput=input("Enter a string :")
uppr,lwer=countCase(userInput)
print("No. of upper case charecters : ",uppr)
print("No. of lower case charecters : ",lwer)
