def product(arr, arr1, l):
    arr2 = []
    for i in range(l):
        arr2.append(arr[i] * arr1[i])
    print("Product of two in array is", arr2)
l = int(input("Enter length of arrays : "))
arr = []
print("Enter elements in the first array")
for i in range(l):
    element = int(input("Enter element in array : "))
    arr.append(element)
arr1 = []
print("Enter elements in the second array")
for i in range(l):
    element = int(input("Enter element in array : "))
    arr1.append(element)
product(arr, arr1, l)
