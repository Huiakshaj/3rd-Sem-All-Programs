/* 
10.1. Create a structure named "Employee" to store employee details such as employee ID, name, and salary. Write a program to input data for three employees, find the highest salary employee, and display their information.
*/

/* 
10.1. Create a structure named "Employee" to store employee details such as employee ID, name, and salary. Write a program to input data for three employees, find the highest salary employee, and display their information.
*/

#include <stdio.h>
struct Employee {
    int id;
    char name[20];
    float salary;
};
int main() {
    struct Employee employees[3], highest_salary_employee;
    int i;
    printf("Enter details of 3 employees (ID, Name, Salary) :\n");
    for (i = 0; i < 3; i++) {
        printf("Employee %d :\n", i + 1);
        scanf("%d %s %f", &employees[i].id, employees[i].name, &employees[i].salary);
    }
    highest_salary_employee = employees[0];

    for (i = 1; i < 3; i++) {
        if (employees[i].salary > highest_salary_employee.salary) {
            highest_salary_employee = employees[i];
        }
    }
    printf("\nEmployee with the highest salary :\n");
    printf("ID : %d\n", highest_salary_employee.id);
    printf("Name : %s\n", highest_salary_employee.name);
    printf("Salary : %.2f\n", highest_salary_employee.salary);
    return 0;
}