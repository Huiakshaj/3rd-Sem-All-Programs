/* 
3.2. WAP in C to perform linear search in an array using recursion.
*/

#include <stdio.h>
int recurlinear(int a[], int b, int c) {
    if (b == 0)
        return -1;
    if (a[b - 1] == c)
        return b - 1;
    else
        return recurlinear(a, b - 1, c);
}
int main() {
    int n, c, d;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the element to search for: ");
    scanf("%d", &c);
    d = recurlinear(a, n, c);
    if(d != -1)
        printf("Element %d found at index %d.\n", c, d);
    else
        printf("Element %d not found in the array.\n", c);
    return 0;
}
