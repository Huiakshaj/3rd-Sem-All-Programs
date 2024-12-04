/* 
4.1. Implement stack using an array and perform push, pop, and display.
*/

#include <stdio.h>
#define Max 5
int stack[Max];
int top = -1;
void push() {
    if (top == Max - 1) {
        printf("Stack Overflow\n");
    } else {
        int element;
        printf("Enter the element to push: ");
        scanf("%d", &element);
        stack[++top] = element;
        printf("Pushed %d to stack\n", element);
    }
}
void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
    } else {
        int removedElement = stack[top--];
        printf("Popped %d from stack\n", removedElement);
    }
}
void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}
int main() {
    int choice;

    while (1) {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
