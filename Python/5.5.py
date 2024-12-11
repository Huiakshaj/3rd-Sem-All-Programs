x=int(input("Enter the number of rows : "))
for i in range(x,0,-1):
   print(" "*(x -i), end="")
   print("* " * i)
