/* 
6.1. Write a program in C to input a string and print it.
*/

#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a string : ");
    scanf("%s", str);
    printf("Entered string is : %s\n", str);
    return 0;
}
