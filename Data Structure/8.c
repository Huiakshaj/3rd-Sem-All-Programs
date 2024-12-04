/* 
8. Write a program in C to represent a Binary Tree using an array.
*/

﻿#include <stdio.h>
void preorderTraversal(int binaryTree[], int index, int size) {
    if (index >= size || binaryTree[index] == -1) {
        return;
    }
    printf("%d ", binaryTree[index]);
    preorderTraversal(binaryTree, 2 * index + 1, size);
    preorderTraversal(binaryTree, 2 * index + 2, size);
}
int main() {
    int binaryTree[] = {10, 20, 30, 40, 50, 60, 70, -1, -1, -1, -1};
    int size = sizeof(binaryTree) / sizeof(binaryTree[0]);
    printf("Preorder Traversal: ");
    preorderTraversal(binaryTree, 0, size);
    printf("\n");
    return 0;
}
