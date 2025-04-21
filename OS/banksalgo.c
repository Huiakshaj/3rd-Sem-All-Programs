#include <stdio.h>
#define MAX_PROCESSES 10
#define MAX_RESOURCES 10
void calculateNeed(int need[MAX_PROCESSES][MAX_RESOURCES], int max[MAX_PROCESSES][MAX_RESOURCES], int alloc[MAX_PROCESSES][MAX_RESOURCES], int n, int m) {
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            need[i][j] = max[i][j] - alloc[i][j];
}
int isSafe(int processes[], int avail[], int max[][MAX_RESOURCES], int alloc[][MAX_RESOURCES], int n, int m) {
    int need[MAX_PROCESSES][MAX_RESOURCES];
    int i, j, k;
    calculateNeed(need, max, alloc, n, m);
    int work[MAX_RESOURCES];
    int finish[MAX_PROCESSES] = {0};
    int safeSeq[MAX_PROCESSES];
    int count = 0;
    for (i = 0; i < m; i++)
        work[i] = avail[i];
    while (count < n) {
        int found = 0;
        for (i = 0; i < n; i++) {
            if (!finish[i]) {
                for (j = 0; j < m; j++) {
                    if (need[i][j] > work[j])
                        break;
                }
                if (j == m) {
                    for (k = 0; k < m; k++)
                        work[k] += alloc[i][k];
                    safeSeq[count] = processes[i];
                    count++;
                    finish[i] = 1;
                    found = 1;
                }
            }
        }
        if (!found) {
            printf("System is in an unsafe state.\n");
            return 0;
        }
    }
    printf("System is in a safe state.\nSafe Sequence: ");
    for (i = 0; i < n; i++)
        printf("P%d ", safeSeq[i]);
    printf("\n");
    return 1;
}
int main() {
    int n, m;
    int i, j;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    printf("Enter number of resources: ");
    scanf("%d", &m);
    int processes[MAX_PROCESSES], avail[MAX_RESOURCES];
    int max[MAX_PROCESSES][MAX_RESOURCES], alloc[MAX_PROCESSES][MAX_RESOURCES];
    printf("Enter process IDs: ");
    for (i = 0; i < n; i++)
        scanf("%d", &processes[i]);
    printf("Enter available resources: ");
    for (i = 0; i < m; i++)
        scanf("%d", &avail[i]);
    printf("Enter allocation matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &alloc[i][j]);
        }
    }
    printf("Enter maximum matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &max[i][j]);
        }
    }
    isSafe(processes, avail, max, alloc, n, m);
    return 0;
}
