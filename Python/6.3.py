def sum(arr, list):
    sum=0
    for i in range(0,num):
        sum=sum+arr[i]
    print(f"Sum of element in array is {sum}. ")
num = int(input("Enter length of array : "))
arr=[ ]
for i in range(0,num):
    a=int(input("Enter element in array : "))
    arr.append(a)
sum(arr,num)
