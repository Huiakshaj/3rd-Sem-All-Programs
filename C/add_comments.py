import os

# Define the path where your files are located
folder_path = r"E:\Semester 3 Programs\C"  # Replace with the actual path

# Define the questions to be added as comments for each file
file_comments = {
    "5.1.c": """\
/* 
5.1. Write a program in C to find the largest and smallest numbers from array elements.
*/\n
""",
    "5.2.c": """\
/* 
5.2. Write a program in C to sort array elements in ascending/descending order.
*/\n
""",
    "5.3.c": """\
/* 
5.3. Write a program in C for the addition of a 2 x 2 matrix.
*/\n
""",
    "5.4.c": """\
/* 
5.4. Write a program in C to calculate the multiplication of a 2-dimensional matrix.
*/\n
""",
    "6.1.c": """\
/* 
6.1. Write a program in C to input a string and print it.
*/\n
""",
    "6.2.c": """\
/* 
6.2. Write a program in C to find the length of a string.
*/\n
""",
    "6.3.c": """\
/* 
6.3. Write a program in C to print individual characters of a string in reverse order.
*/\n
""",
    "6.4.c": """\
/* 
6.4. Write a program in C to copy one string to another string.
*/\n
""",
    "7.1.c": """\
/* 
7.1. Write a program in C to swap two numbers using a function.
*/\n
""",
    "7.2.c": """\
/* 
7.2. Write a program in C to check if a given number is even or odd using a function.
*/\n
""",
    "7.3.c": """\
/* 
7.3. Write a program in C to check if a number is Armstrong using a function.
*/\n
""",
    "7.4.c": """\
/* 
7.4. Write a program in C to find the factorial of a number using recursion.
*/\n
""",
    "8.1.c": """\
/* 
8.1. Write a program in C to read and display an integer array using a pointer.
*/\n
""",
    "8.2.c": """\
/* 
8.2. Write a program to access structure members using pointers in C. Example: "strptr" is a pointer to the variable "struct book b1".
*/\n
""",
    "8.3.c": """\
/* 
8.3. Create a structure called "Student" with members name, age, and total marks. Write a C program to input data for two students, display their information, and find the average of total marks.
*/\n
""",
    "8.4.c": """\
/* 
8.4. Write a program in C to dynamically allocate memory for an array of integers.
*/\n
""",
    "9.1.c": """\
/* 
9.1. Write a program to read and print a text. Also count the words and characters in the given text.
*/\n
""",
    "9.2.c": """\
/* 
9.2. Write a program in C to count the number of vowels and consonants in a string using a pointer.
*/\n
""",
    "9.3.c": """\
/* 
9.3. Write a program in C to find the factorial of a given number using pointers.
*/\n
""",
    "10.1.c": """\
/* 
10.1. Create a structure named "Employee" to store employee details such as employee ID, name, and salary. Write a program to input data for three employees, find the highest salary employee, and display their information.
*/\n
""",
    "10.2.c": """\
/* 
10.2. Write a program in C to use realloc() to dynamically increase the size of an already allocated array.
*/\n
"""
}

# Loop through all files in the folder
for filename in os.listdir(folder_path):
    if filename in file_comments:  # Check if the file is in the dictionary
        file_path = os.path.join(folder_path, filename)
        
        # Read the original content of the file
        with open(file_path, "r") as file:
            original_content = file.read()

        # Check if the comment already exists
        if file_comments[filename].strip() not in original_content:
            # Add the specific comment to the top of the file if it doesn't exist
            new_content = file_comments[filename] + original_content

            # Write the new content back to the file
            with open(file_path, "w") as file:
                file.write(new_content)

print("Comments added to specific C files.")
