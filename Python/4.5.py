month =input("Enter the month name in lower case only (leap year not supported): ")
match month:
    case"january":
         print("January has 31 days")
    case"february":
        print("February has 28 days")
    case"march":
        print("March has 31 days")
    case"april":
        print("April has 30 days")
    case"may":
        print("May has 31 days")
    case"june":
       print("June has 30 days")
    case"july":
        print("July has 31 days")
    case"august":
         print("August has 31 days")
    case"september":
         print("September has 30 days")
    case"october":
         print("October has 31 days")
    case"november":
         print("November has 30 days")
    case"december":
         print("December has 31 days")
    case _ :
         print("Invalid Output")
