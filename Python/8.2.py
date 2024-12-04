# 8.2. Write a program to print twin primes less than 100.

def isPrime(n):
    if n <= 1:
        return False
    for i in range(2, int(n*0.5) + 1):
        if n % i == 0:
            return False
    return True
def twinPrimes(limit):
    for num in range(2, limit):
        if isPrime(num) and isPrime(num + 2):
            print(f"({num}, {num + 2})")
limit = int(input("Enter the upper limit to find twin primes : "))
twinPrimes(limit)
