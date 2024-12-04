import os

# Define the path where your files are located
folder_path = "E:\Semester 3 Programs\Data Structure"  # Replace with the actual path

# Define the questions to be added as comments for each file
file_comments = {
    "2.1.c": """\
/* 
2.1. WAP to insert an element in an array at the beginning, at end, and at any place the user wants. Take all the input from the user.
*/\n
""",
    "2.2.c": """\
/* 
2.2. WAP to delete an element of an array from the beginning, from the end, and from any place the user wants. Take all the input from the user.
*/\n
""",
    "3.1.c": """\
/* 
3.1. WAP in C to perform linear search in an array.
*/\n
""",
    "3.2.c": """\
/* 
3.2. WAP in C to perform linear search in an array using recursion.
*/\n
""",
    "3.3.c": """\
/* 
3.3. WAP in C to perform Binary Search in an array.
*/\n
""",
    "3.4.c": """\
/* 
3.4. WAP in C to perform Binary Search in an array using recursion.
*/\n
""",
    "4.1.c": """\
/* 
4.1. Implement stack using an array and perform push, pop, and display.
*/\n
""",
    "4.2.c": """\
/* 
4.2. Implement a queue using an array and perform enqueue, dequeue, and display.
*/\n
""",
    "5.1.c": """\
/* 
5.1. Implement stack using a linked list and perform push, pop, and display using pointers.
*/\n
""",
    "5.2.c": """\
/* 
5.2. Implement queue using a linked list and perform enqueue, dequeue, and display using pointers.
*/\n
""",
    "6.1.c": """\
/* 
6.1. WAP in C to insert at the end, beginning, and after a specific position in a linked list.
*/\n
""",
    "6.2.c": """\
/* 
6.2. WAP in C to perform deletion from the first, end, and from any position in a linked list.
*/\n
""",
    "7.1.c": """\
/* 
7.1. WAP in C to perform Bubble Sort.
*/\n
""",
    "7.2.c": """\
/* 
7.2. WAP in C to perform Insertion Sort.
*/\n
""",
    "8.c": """\
/* 
8. Write a program in C to represent a Binary Tree using an array.
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
        
        # Check if the comment is already present
        if file_comments[filename].strip() not in original_content:
            # Add the specific comment to the top of the file
            new_content = file_comments[filename] + original_content

            # Write the new content back to the file
            with open(file_path, "w") as file:
                file.write(new_content)

print("Comments added to specific C files.")
