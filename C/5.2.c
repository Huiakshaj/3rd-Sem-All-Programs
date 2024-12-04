/* 
5.2. Write a program in C to sort array elements in ascending/descending order.
*/

#include <stdio.h>
int main() {
    int n, i, j, temp, order;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: \n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter 1 for ascending or 0 for descending: ");
    scanf("%d", &order);
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if((order && arr[i] > arr[j]) || (!order && arr[i] < arr[j])) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted array: \n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
