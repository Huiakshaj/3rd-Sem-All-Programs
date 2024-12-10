#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *newnode, *temp;
    int choice = 1; // Variable to control the loop

    while (choice) {
        // Allocate memory for a new node
        newnode = (struct node *)malloc(sizeof(struct node));

        // Input data for the new node
        printf("Enter data: ");
        scanf("%d", &newnode->data);

        newnode->next = NULL; // Initialize the next pointer of the new node

        // If the list is empty
        if (head == NULL) {
            head = temp = newnode;
        } else {
            // Attach the new node to the end of the list
            temp->next = newnode;
            temp = newnode; // Update the temp to the last node
        }

        // Ask user if they want to continue
        printf("Do you want to continue (0, 1)? ");
        scanf("%d", &choice);
    }

    // Display the linked list
    temp = head; // Start from the head node
    printf("Linked list: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next; // Move to the next node
    }
    printf("NULL\n");

    return 0;
}
