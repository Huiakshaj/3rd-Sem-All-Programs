/* 
3.1. WAP in C to perform linear search in an array.
*/

#include <stdio.h>
int main()
{
  int array[100], search, i, n;
  printf("Enter number of elements in array : \n");
  scanf("%d", &n);
  printf("Enter %d numbers : \n", n);
  for (i= 0; i< n; i++)
    scanf("%d", &array[i]);
  printf("Enter a number to search : \n");
  scanf("%d", &search);
  for (i= 0; i < n; i++)
  {
    if (array[i] == search)
    {
      printf("%d Element found  %d.\n", search, i+1);
      break;
    }
  }
  if (i == n)
    printf("%d Element not found \n", search);
  return 0;
}
