// FCFS Scheduling Program in C

#include <stdio.h>

int main() {
    int pid[15];
    int bt[15];
    int n, i;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    printf("Enter process ID of all the processes: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &pid[i]);
    }

    printf("Enter burst time of all the processes: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &bt[i]);
    }

    int wt[n];
    wt[0] = 0;

    // Calculating waiting time for each process
    for(i = 1; i < n; i++) {
        wt[i] = bt[i - 1] + wt[i - 1];
    }

    printf("Process ID  Burst Time  Waiting Time  Turnaround Time\n");
    float twt = 0.0, tat = 0.0;

    for(i = 0; i < n; i++) {
        printf("%d\t\t%d\t\t%d\t\t%d\n", pid[i], bt[i], wt[i], bt[i] + wt[i]);
        twt += wt[i];
        tat += (wt[i] + bt[i]);
    }

    float att, awt;
    awt = twt / n;
    att = tat / n;

    printf("Avg. waiting time = %f\n", awt);
    printf("Avg. turnaround time = %f\n", att);

    return 0;
}

