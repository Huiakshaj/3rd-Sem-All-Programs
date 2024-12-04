/* 
9.2. Write a program in C to count the number of vowels and consonants in a string using a pointer.
*/

/* 
9.2. Write a program in C to count the number of vowels and consonants in a string using a pointer.
*/

#include <stdio.h> 
int main() {
    char str[1000];
    int vowels = 0, consonants = 0;
    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') vowels++;
        else if (ch != ' ' && ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')))
            consonants++;
    }
    printf("Vowels : %d\n", vowels);
    printf("Consonants : %d\n", consonants);
    return 0;
}