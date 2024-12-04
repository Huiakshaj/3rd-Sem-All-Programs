/* 
2.2. WAP to delete an element of an array from the beginning, from the end, and from any place the user wants. Take all the input from the user.
*/

#include <stdio.h>
int main() {
    int arr[50], n, i, pos;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("1. Delete from beginning\n");
    printf("2. Delete from end\n");
    printf("3. Delete from any position\n");
    printf("Enter your choice: ");
    scanf("%d", &pos);
    switch (pos) {
        case 1:
            for (i = 0; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
            n--;
            break;
        case 2:
            n--;
            break;
        case 3:
            printf("Enter the position: ");
            scanf("%d", &pos);
            for (i = pos - 1; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
            n--;
            break;
        default:
            printf("Invalid choice!\n");
            return 0;
    }
    printf("Array after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
