# 9.2. Write a Python program that accepts a list of integers and calculates the length and the fifth element. Return true if the length of the list is 8 and the fifth element occurs thrice in the said list.

def check_list(lst):
    if len(lst) == 8 and lst.count(lst[4]) == 3:
        return True
    return False
lst = list(map(int, input("Enter 8 integers separated by space: ").split()))
result = check_list(lst)
print("Result:", result)
