/* 
4.2. Implement a queue using an array and perform enqueue, dequeue, and display.
*/

#include <stdio.h>
#define Max 5
int queue[Max];
int front = 0;
int rear = -1;
void enqueue() {
    if (rear == Max - 1) {
        printf("Queue Overflow\n");
    } else {
        int element;
        printf("Enter the element to enqueue: ");
        scanf("%d", &element);
        queue[++rear] = element;
        printf("Enqueued %d to queue\n", element);
    }
}
void dequeue() {
    if (front > rear) {
        printf("Queue Underflow\n");
    } else {
        int removedElement = queue[front++];
        printf("Dequeued %d from queue\n", removedElement);
    }
}
void display() {
    if (front > rear) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}
int main() {
    int choice;

    while (1) {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
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
