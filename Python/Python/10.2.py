# 10.2. Write a function to remove empty strings from the list of strings.

def remove_empty_strings(strings):
    return [string for string in strings if string]
strings = input("Enter a list of strings separated by space: ").split()
result = remove_empty_strings(strings)
print("Result:", result)
