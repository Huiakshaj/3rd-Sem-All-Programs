# 7.4. Write a Python function that prints out the first n rows of Pascal's triangle.

def pascalsTriangle(n):
    triangle=[[1]]
    for i in range(1,n):
        row=[1]
        for j in range(1, i):
            row.append(triangle[i-1][j-1] + triangle[i-1][j])
        row.append(1)
        triangle.append(row)
    return triangle
n=int(input("Enter the number of rows for Pascal's triangle: "))
for row in pascalsTriangle(n):
    print(row)
