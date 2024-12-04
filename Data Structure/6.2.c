/* 
6.2. WAP in C to perform deletion from the first, end, and from any position in a linked list.
*/

#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void insatend(struct Node** head, int data) {
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head;
    newnode->data = data;
    newnode->next = NULL;
    if (*head == NULL) {
        *head = newnode;
        return;
    }
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = newnode;
}
void deletefrombeginning(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty, nothing to delete.\n");
        return;
    }
    struct Node* temp = *head;
    *head = (*head)->next;
    printf("Deleted %d from the beginning.\n", temp->data);
    free(temp);
}
void deletefromend(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty, nothing to delete.\n");
        return;
    }
    struct Node* temp = *head;
    struct Node* prev = NULL;
    if (temp->next == NULL) {
        *head = NULL;
        printf("Deleted %d from the end.\n", temp->data);
        free(temp);
        return;
    }
    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    printf("Deleted %d from the end.\n", temp->data);
    free(temp);
}
void deletefromposition(struct Node** head, int position) {
    if (*head == NULL) {
        printf("List is empty, nothing to delete.\n");
        return;
    }
    struct Node* temp = *head;
    if (position == 1) {
        *head = temp->next;
        printf("Deleted %d from position %d.\n", temp->data, position);
        free(temp);
        return;
    }
    struct Node* prev = NULL;
    for (int i = 1; temp != NULL && i < position; i++) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Position %d not found in the list.\n", position);
        return;
    }
    prev->next = temp->next;
    printf("Deleted %d from position %d.\n", temp->data, position);
    free(temp);
}
void displayList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}
int main() {
    struct Node* head = NULL;
    int choice, data, position;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert at End\n");
        printf("2. Delete from Beginning\n");
        printf("3. Delete from End\n");
        printf("4. Delete from Position\n");
        printf("5. Display List\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                insatend(&head, data);
                break;
            case 2:
                deletefrombeginning(&head);
                break;
            case 3:
                deletefromend(&head);
                break;
            case 4:
                printf("Enter position to delete: ");
                scanf("%d", &position);
                deletefromposition(&head, position);
                break;
            case 5:
                printf("Linked List: ");
                displayList(head);
                break;
            case 6:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
