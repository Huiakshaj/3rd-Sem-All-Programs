num=int(input("Enter number to be checked: "))
temp=num
rev=0
while temp>0:
	rev=rev*10
	rev=(rev+temp%10)
	temp=temp//10
if num==rev:
	print("It is a palindrome")
else:
	print("It is not a palindrome")
