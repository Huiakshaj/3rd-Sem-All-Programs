#include <stdio.h>
int main() {
    int arr[10];
    int i, sum = 0;
    float average;
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++) {
        sum += arr[i];
    }
    average = sum / 10.0;
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);
    return 0;
}
