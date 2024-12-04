# 10.1. Write a function to find all duplicates in the list.

def find_duplicates(lst):
    duplicates = []
    seen = set()
    for num in lst:
        if num in seen and num not in duplicates:
            duplicates.append(num)
        seen.add(num)
    return duplicates
lst = list(map(int, input("Enter a list of integers separated by space: ").split()))
result = find_duplicates(lst)
print("Duplicates:", result)
