/* 
7.2. Write a program in C to check if a given number is even or odd using a function.
*/

#include <stdio.h>
void check_givennumber_odd_even(int num) {
    if (num % 2 == 0)
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    check_givennumber_odd_even(num);
    return 0;
}
