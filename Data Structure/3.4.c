/* 
3.4. WAP in C to perform Binary Search in an array using recursion.
*/

#include <stdio.h>
int recurbinary(int a[], int g, int h, int t) {
    if (g > h)
        return -1;
    int m = g + (h - g) / 2;
    if (a[m] == t)
        return m;
    else if (a[m] > t)
        return recurbinary(a, g, m - 1, t);
    else
        return recurbinary(a, m + 1, h, t);
}
int main() {
    int n, t, r;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d sorted elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the element to search for: ");
    scanf("%d", &t);
    r = recurbinary(a, 0, n - 1, t);
    if(r != -1)
        printf("Element %d found at index %d.\n", t, r);
    else
        printf("Element %d not found in the array.\n", t);
    return 0;
}
