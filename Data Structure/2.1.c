/* 
2.1. WAP to insert an element in an array at the beginning, at end, and at any place the user wants. Take all the input from the user.
*/

#include <stdio.h>
int main() {
    int arr[50], n, i, pos, element;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);
    printf("1. Insert at beginning\n");
    printf("2. Insert at end\n");
    printf("3. Insert at any position\n");
    printf("Enter your choice: ");
    scanf("%d", &pos);
    switch (pos) {
        case 1:
            for (i = n; i > 0; i--) {
                arr[i] = arr[i - 1];
            }
            arr[0] = element;
            n++;
            break;
        case 2:
            arr[n] = element;
            n++;
            break;
        case 3:
            printf("Enter the position: ");
            scanf("%d", &pos);
            for (i = n; i >= pos; i--) {
                arr[i] = arr[i - 1];
            }
            arr[pos - 1] = element;
            n++;
            break;
        default:
            printf("Invalid choice!\n");
            return 0;
    }
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
