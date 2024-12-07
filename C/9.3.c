/* 
9.3. Write a program in C to find the factorial of a given number using pointers.
*/

#include <stdio.h>
void findFactorial(int *num, int *result) {
    *result = 1;
    for (int i = 1; i <= *num; i++) {
        *result *= i;
    }
}
int main() {
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    findFactorial(&num, &result);
    printf("Factorial of %d is %d\n", num, result);
    return 0;
}
