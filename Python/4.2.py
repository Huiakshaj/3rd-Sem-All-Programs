n=int(input("No. of elements to print: "))
a=0;b=1
print("The elements are")
print(a,b, end=' ')
for i in range(n-2):
      c=a+b
      print(c, end=' ')
      a=b
      b=c

