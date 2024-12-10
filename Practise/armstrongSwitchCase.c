#include <stdio.h>
#include <math.h>

void checkArmstrong(int num) {
    int sum = 0, temp, remainder, count = 0;

    // Finding the number of digits
    temp = num;
    while (temp != 0) {
        temp /= 10;
        count++;
    }

    // Calculating the sum of the digits raised to the power of count
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        temp /= 10;
        switch (count) {
            case 3:
                sum += pow(remainder, 3);  // Sum the cube of the digit (for 3-digit numbers)
                break;
            case 4:
                sum += pow(remainder, 4);  // Sum the fourth power of the digit (for 4-digit numbers)
                break;
            case 5:
                sum += pow(remainder, 5);  // Sum the fifth power of the digit (for 5-digit numbers)
                break;
            default:
                printf("Unsupported number of digits for Armstrong check\n");
                return;
        }
    }

    // Checking if the number is Armstrong
    if (sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    checkArmstrong(num);
    return 0;
}