/* 
9.1. Write a program to read and print a text. Also count the words and characters in the given text.
*/

/* 
9.1. Write a program to read and print a text. Also count the words and characters in the given text.
*/

#include <stdio.h>
int main() {
    char text[1000];
    int count = 0, words = 1;
    printf("Enter a text : ");
    fgets(text, sizeof(text), stdin);
    for (int i = 0; text[i] != '\0'; ++i) {
        if (text[i] == ' ' || text[i] == '\n') {
            ++words;
        }
        ++count;
    }
    printf("Number of characters (including spaces) : %d\n", count - 1);
    printf("Number of words : %d\n", words - 1);
    return 0;
}