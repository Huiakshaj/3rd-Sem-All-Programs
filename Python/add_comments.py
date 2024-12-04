import os

# Define the path where your Python files are located
folder_path = "E:\Semester 3 Programs\Python"  # Replace with the actual path

# Define the questions to be added as comments for each Python file
file_comments = {
    "7.1.py": """\
# 7.1. Write a Python function to find the Max of three numbers.\n
""",
    "7.2.py": """\
# 7.2. Write a Python function to multiply all the numbers in a list.\n
""",
    "7.3.py": """\
# 7.3. Write a Python function that accepts a string and calculates the number of uppercase letters and lowercase letters.\n
""",
    "7.4.py": """\
# 7.4. Write a Python function that prints out the first n rows of Pascal's triangle.\n
""",
    "7.5.py": """\
# 7.5. Write a Python program to access a function inside a function.\n
""",
    "7.6.py": """\
# 7.6. Write a Python program to detect the number of local variables declared in a function.\n
""",
    "8.1.py": """\
# 8.1. Write a function that inputs a number and prints the multiplication table of that number.\n
""",
    "8.2.py": """\
# 8.2. Write a program to print twin primes less than 100.\n
""",
    "8.3.py": """\
# 8.3. Write a function that converts a decimal number to a binary number.\n
""",
    "8.4.py": """\
# 8.4. Write a function prodDigits() that inputs a number and returns the product of digits of that number.\n
""",
    "8.5.py": """\
# 8.5. A number is called perfect if the sum of proper divisors of that number is equal to the number.\n
""",
    "9.1.py": """\
# 9.1. Write a Python program that accepts an integer and determines whether it is greater than 4^4 and which is 4 mod 34.\n
""",
    "9.2.py": """\
# 9.2. Write a Python program that accepts a list of integers and calculates the length and the fifth element. Return true if the length of the list is 8 and the fifth element occurs thrice in the said list.\n
""",
    "9.3.py": """\
# 9.3. Given a string which may contain lowercase and uppercase characters. Remove all duplicate characters from the string and find the resultant string.\n
""",
    "9.4.py": """\
# 9.4. Given two strings s1 and s2 consisting of lowercase characters, check whether two given strings are an anagram of each other or not.\n
""",
    "9.5.py": """\
# 9.5. The string may contain leading or trailing spaces, or multiple spaces between two words. Return the string with a single space separating the words and no extra spaces.\n
""",
    "10.1.py": """\
# 10.1. Write a function to find all duplicates in the list.\n
""",
    "10.2.py": """\
# 10.2. Write a function to remove empty strings from the list of strings.\n
""",
    "10.3.py": """\
# 10.3. Write a program to print each line of a file in reverse order.\n
""",
    "10.4.py": """\
# 10.4. Write a program to compute the number of characters, words, and lines in a file.\n
""",
    "10.5.py": """\
# 10.5. Write a script to calculate age in years, months, and days of a person taking their date of birth as input and accessing the current system date.\n
"""
}

# Loop through all files in the folder
for filename in os.listdir(folder_path):
    if filename in file_comments:  # Check if the file is in the dictionary
        file_path = os.path.join(folder_path, filename)
        
        # Read the original content of the file
        with open(file_path, "r") as file:
            original_content = file.read()
        
        # Check if the comment is already present
        if file_comments[filename].strip() not in original_content:
            # Add the specific comment to the top of the file
            new_content = file_comments[filename] + original_content

            # Write the new content back to the file
            with open(file_path, "w") as file:
                file.write(new_content)

print("Comments added to specific Python files.")