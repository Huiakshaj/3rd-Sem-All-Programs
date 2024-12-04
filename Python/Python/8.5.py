# 8.5. A number is called perfect if the sum of proper divisors of that number is equal to the number.

def isPerfect(n):
    sumDivisors = 0
    for i in range(1, n):
        if n % i == 0:
            sumDivisors += i
    return sumDivisors == n
def perfectNumbers(limit):
    for num in range(2, limit + 1):
        if isPerfect(num):
            print(num)
limit = int(input("Enter the upper limit to find perfect numbers: "))
perfectNumbers(limit)
