o=int(input("Enter a number : "))
for i in range(o,0,-1):
   line = [str(j)for j in range(i,0,-1)]
   print(' '.join(line))
