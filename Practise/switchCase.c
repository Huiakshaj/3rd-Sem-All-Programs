#include <stdio.h>
int main() {
    int number;
    printf("Enter a number between 1 to 7: ");
    scanf("%d", &number);
    switch(number) {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid Number\n");
            return 0; // Exit if invalid number is entered
    }
    switch(number) {
        case 2:  // Monday
        case 3:  // Tuesday
        case 4:  // Wednesday
        case 5:  // Thursday
        case 6:  // Friday
            printf("It's a weekday :(\n");
            break;
        case 1:  // Sunday
        case 7:  // Saturday
            printf("It's a weekend :)\n");
            break;
        default:
            break;
    }
    return 0;
}