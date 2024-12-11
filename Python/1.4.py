y = int (input("Enter a year:"))
if ((y % 400 == 0) or (y % 4 == 0 and y % 100!=0)):
	print("It's a leap year")
else:
	print("It's not a leap year")
