# 9.5. The string may contain leading or trailing spaces, or multiple spaces between two words. Return the string with a single space separating the words and no extra spaces.

def remove_extra_spaces(string):
    words = string.split()
    result = ' '.join(words)
    return result
string = input("Enter a string with extra spaces: ")
result = remove_extra_spaces(string)
print("Result:", result)
