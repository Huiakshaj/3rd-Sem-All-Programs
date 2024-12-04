/* 
8.1. Write a program in C to read and display an integer array using a pointer.
*/

#include <stdio.h>
int main() {
	int n, i;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	int arr[n];
	int *ptr = arr;
	printf("Enter %d elements : \n",n);
	for (i = 0; i < n; i++){
		scanf("%d", (ptr + i));
	}
	printf("The elements are :\n");
	for (i = 0; i < n; i++){
		printf("%d ", *(ptr + i));
	}
	return 0;
}
