list = [10,22,50,44]
print("list:" ,list)
search=int(input("Enter the item to search:"))
if(search in list):
	i=list.index(search)
	print(search, "Found","at position",i+1, "in the list")
else: 
	print("Item not found")

