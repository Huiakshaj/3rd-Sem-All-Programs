# 9.3. Given a string which may contain lowercase and uppercase characters. Remove all duplicate characters from the string and find the resultant string.

def remove_duplicates(string):
    result = ""
    seen = set()
    for char in string:
        if char not in seen:
            result += char
            seen.add(char)
    return result
string = input("Enter a string: ")
result = remove_duplicates(string)
print("Result:", result)
