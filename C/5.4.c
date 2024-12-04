/* 
5.4. Write a program in C to calculate the multiplication of a 2-dimensional matrix.
*/

#include <stdio.h>
int main() {
    int matrix1[2][2], matrix2[2][2], result[2][2];
    int i, j, k;
    printf("Enter elements of first 2x2 matrix : \n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter elements of second 2x2 matrix : \n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            result[i][j] = 0;
            for(k = 0; k < 2; k++) {
                result[i][j] += matrix1[i][k] * matrix2[i][j];
            }
        }
    }
    printf("Resultant matrix after multiplication : \n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
