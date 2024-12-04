/* 
6.3. Write a program in C to print individual characters of a string in reverse order.
*/

#include <stdio.h>
int main() {
    char str[100];
    int i = 0;
    printf("Enter a string : ");
    scanf("%s", str);
    while (str[i] != '\0') {
        i++;
    }
    printf("Characters in reverse order : \n");
    for (i = i - 1; i >= 0; i--) {
        printf("%c\n", str[i]);
    }
    return 0;
}
