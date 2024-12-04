/* 
7.3. Write a program in C to check if a number is Armstrong using a function.
*/

#include <stdio.h>
int armstrong(int num) {
    int original = num, sum = 0, digits = 0;
    while (original != 0) {
        digits++;
        original /= 10;
    }
    original = num;
    while (original != 0) {
        int remainder = original % 10;
        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= remainder;
        }
        sum += power;
        original /= 10;
    }
    return (sum == num);
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (armstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}
