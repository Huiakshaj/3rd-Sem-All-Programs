/* 
8.2. Write a program to access structure members using pointers in C. Example: "strptr" is a pointer to the variable "struct book b1".
*/

#include <stdio.h>
struct book {
    char title[50];
    double price;
	int page;
};
int main() {
    struct book b1 = {"C Programming", 250.0,500};
    struct book *strptr;
	strptr = &b1;
    printf("Title : %s\n", strptr->title);
    printf("Price : %.2f\n", strptr->price);
	printf(" Page : %d\n", strptr->page);
    return 0;
}
