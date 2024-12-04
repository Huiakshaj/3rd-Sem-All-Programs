/* 
8.4. Write a program in C to dynamically allocate memory for an array of integers.
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;  
    }
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("The elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");  
    free(arr);
    return 0;
}
