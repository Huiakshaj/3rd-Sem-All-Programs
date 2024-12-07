/* 
10.2. Write a program in C to use realloc() to dynamically increase the size of an already allocated array.
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
    int *arr, new_size, i, old_size = 5;
    arr = (int *)malloc(old_size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Initial array:\n");
    for (i = 0; i < old_size; i++) {
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }
    printf("\nEnter new size: ");
    scanf("%d", &new_size);
    arr = (int *)realloc(arr, new_size * sizeof(int));
    if (arr == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }
    for (i = old_size; i < new_size; i++) {
        arr[i] = 0;
    }
    printf("Updated array:\n");
    for (i = 0; i < new_size; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}
