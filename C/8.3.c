/* 
8.3. Create a structure called "Student" with members name, age, and total marks. Write a C program to input data for two students, display their information, and find the average of total marks.
*/

#include <stdio.h>
struct Student {
    char name[50];
    int age;
    float totalMarks;
};
int main() {
    struct Student s1, s2;
    printf("Enter details for Student 1 \n");
    printf("Name : ");
    scanf("%s", s1.name);
    printf(" Age : ");
    scanf("%d", &s1.age);
    printf("Total Marks : ");
    scanf("%f", &s1.totalMarks);
    printf("\nEnter details for Student 2 \n");
    printf("Name : ");
    scanf("%s", s2.name);
    printf(" Age : ");
    scanf("%d", &s2.age);
    printf("Total Marks : ");
    scanf("%f", &s2.totalMarks);
    printf("\nStudent 1 Information : \n");
    printf("Name : %s, Age : %d, Total Marks : %.2f\n", s1.name, s1.age, s1.totalMarks);
    printf("\nStudent 2 Information:\n");
    printf("Name : %s, Age : %d, Total Marks : %.2f\n", s2.name, s2.age, s2.totalMarks);
    float average = (s1.totalMarks + s2.totalMarks) / 2;
    printf("\nAverage of total marks : %.2f\n", average);
    return 0;
}
