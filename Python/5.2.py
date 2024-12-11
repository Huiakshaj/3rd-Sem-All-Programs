m=int(input("Enter a number : ")) 
for i in range(1,m+1):
   line = [str(max(i,j))for j in range(1,m+1)]
   print(' '.join (line))
