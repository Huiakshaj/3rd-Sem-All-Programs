def is_prime(number):
   if number <=1:
      return False
   for i in range(2,int(number**0.5)+1):
      if number % i == 0:
         return False 
   return True
number = int(input("Enter a number to check if it is prime : "))
if is_prime(number):
   print("It is a prime number.")
else:
   print("It is not a prime number.")
