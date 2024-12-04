/* 
5.1. Implement stack using a linked list and perform push, pop, and display using pointers.
*/

#include<stdio.h>
#include<stdlib.h>
struct Node;
int data;
    struct Node* next;
};
struct Node* top = NULL;
void push(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = top;
    top = newNode;
}
void pop() {
    if (top != NULL) {
        struct Node* temp = top;
        top = top->next;
        free(temp);
    }
}
void display() {
    struct Node* temp = top;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main() {
    int choice, value;
    while (1) {
        printf("1. Push  2. Pop  3. Display  4. Exit\n");
        scanf("%d", &choice);
        if (choice == 1) {
            scanf("%d", &value);
            push(value);
        } else if (choice == 2) {
            pop();
        } else if (choice == 3) {
            display();
        } else if (choice == 4) {
            break;
        }
    }
    return 0;
}
