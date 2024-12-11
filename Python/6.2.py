def search(item, list):
	if item in list:
	   return True
	return False
list=input("Enter a list : ")
search_item =input("Enter the item to search : ")
if search_item in list:
   print("Found in the list.")
else:
   print("Item not found.")
