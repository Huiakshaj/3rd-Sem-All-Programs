string = input("Enter a string : \n")
letters = 0 
digits = 0 
for char in string:
  if char.isdigit():
   digits+=1
  elif char.isalpha():
   	letters+=1
print(f"The string '{string}'y has {letters} letters and {digits} digits.")
