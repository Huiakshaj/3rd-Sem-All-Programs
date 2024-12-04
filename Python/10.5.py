# 10.5. Write a script to calculate age in years, months, and days of a person taking their date of birth as input and accessing the current system date.

from datetime import datetime
def calculate_age(dob):
    today = datetime.today()
    dob = datetime.strptime(dob, "%Y-%m-%d")
    years = today.year - dob.year
    months = today.month - dob.month
    days = today.day - dob.day
    if days < 0:
        months -= 1
        days += (dob.replace(year=dob.year + years, month=dob.month % 12 + 1, day=1) - dob).days
    if months < 0:
        years -= 1
        months += 12
    return years, months, days
dob = input("Enter your date of birth (YYYY-MM-DD): ")
years, months, days = calculate_age(dob)
print(f"Age: {years} years, {months} months, {days} days")
