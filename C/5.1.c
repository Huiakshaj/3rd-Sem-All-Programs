/*
5.1. Write a program in C to find the largest and smallest numbers from array elements.
*/

#include <stdio.h>
int main() {
    int n, i, max, min;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements : \n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Largest number : %d\n", max);
    printf("Smallest number : %d\n", min);
    return 0;
}
