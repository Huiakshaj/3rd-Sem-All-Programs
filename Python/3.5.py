Student = {
    'Bob': {'Roll': 1, 'sem': '3rd', 'YGPA': 8.2},
    'Emma': {'Roll': 2, 'sem': '3rd', 'YGPA': 9.2},
    'Max': {'Roll': 3, 'sem': '3rd', 'YGPA': 6.9},
    'John': {'Roll': 4, 'sem': '3rd', 'YGPA': 6.8},
}
topper_name = None
highest_ygpa = 0
for name, details in Student.items():
    if details['YGPA'] > highest_ygpa:
        highest_ygpa = details['YGPA']
        topper_name = name
print(f"{topper_name} is the topper with CGPA {highest_ygpa}")