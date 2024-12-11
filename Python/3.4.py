student={
"Name":"Aman Jha",
"Stream":"CSE",
"Sem":"3rd",
"Roll_No":"23",
"CGPA":"9.2",
"Age":"19",
"Collage":"Techno Main Saltlake",
}
student["Full Name"]=student.pop("Name")
student["email"]='aman123@gmail.com'
if "age" in student:
    del student["age"]
print(student)
