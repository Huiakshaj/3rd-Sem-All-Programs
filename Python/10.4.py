# 10.4. Write a program to compute the number of characters, words, and lines in a file.

def count_file_content(filename):
    with open(filename, 'r') as file:
        lines = file.readlines()
        num_lines = len(lines)
        num_words = sum(len(line.split()) for line in lines)
        num_characters = sum(len(line) for line in lines)
    return num_characters, num_words, num_lines
filename = input("Enter the filename: ")
characters, words, lines = count_file_content(filename)
print(f"Characters: {characters}, Words: {words}, Lines: {lines}")
