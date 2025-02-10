#include <stdio.h>

int main() {
    int A[100][4];
    int i, j, n, total = 0, index, temp;
    float avg_wt, avg_tat;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    printf("Enter Burst Time:\n");
    for (i = 0; i < n; i++) {
        printf("P%d: ", i + 1);
        scanf("%d", &A[i][1]);
        A[i][0] = i + 1;  // Correcting process number assignment
    }

    // Sorting processes by Burst Time (SJF)
    for (i = 0; i < n - 1; i++) {
        index = i;
        for (j = i + 1; j < n; j++) {
            if (A[j][1] < A[index][1])
                index = j;
        }

        // Swap Burst Time
        temp = A[i][1];
        A[i][1] = A[index][1];
        A[index][1] = temp;

        // Swap Process Number
        temp = A[i][0];
        A[i][0] = A[index][0];
        A[index][0] = temp;
    }

    // Waiting Time Calculation
    A[0][2] = 0;  // First process has 0 waiting time
    total = 0;
    for (i = 1; i < n; i++) {
        A[i][2] = A[i - 1][2] + A[i - 1][1];
        total += A[i][2];
    }
    avg_wt = (float)total / n;

    // Turnaround Time Calculation
    total = 0;
    printf("\nP    BT   WT   TAT\n");
    for (i = 0; i < n; i++) {
        A[i][3] = A[i][1] + A[i][2];  // TAT = BT + WT
        total += A[i][3];
        printf("P%d   %d    %d    %d\n", A[i][0], A[i][1], A[i][2], A[i][3]);
    }
    avg_tat = (float)total / n;

    // Output Average WT and TAT
    printf("\nAverage Waiting Time = %.2f", avg_wt);
    printf("\nAverage Turnaround Time = %.2f\n", avg_tat);

    return 0;
}
