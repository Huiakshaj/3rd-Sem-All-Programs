# 10.3. Write a program to print each line of a file in reverse order.

def print_lines_in_reverse(filename):
    with open(filename, 'r') as file:
        lines = file.readlines()
        for line in lines:
            print(line.strip()[::-1])
filename = input("Enter the filename: ")
print_lines_in_reverse(filename)
