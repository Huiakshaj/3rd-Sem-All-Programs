/* 
6.4. Write a program in C to copy one string to another string.
*/

#include<stdio.h>
#include<string.h>
int main () {
	char source[] = "C Program";
	char Destination[100];
	printf("Enter a string : ");
	scanf("%s", source);
	strcpy(Destination, source);
	printf("Source string : %s\n", source);
	printf("Destination string : %s\n", Destination);
	return 0;
}
