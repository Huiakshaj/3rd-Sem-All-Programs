#include <stdio.h>
#define MAX 9999
struct proc
{
    int no, at, bt, rt, ct, wt, tat, pri, temp;
};
struct proc read(int i)
{
    struct proc p;
    printf("\nProcess No: %d\n", i);
    p.no = i;
    printf("Enter Arrival Time:");
    scanf("%d", &p.at);
    printf("Enter Burst Time:");
    scanf("%d", &p.bt);
    p.rt = p.bt;
    printf("Enter priority:");
    scanf("%d", &p.pri);
    p.temp = p.pri;
    return p;
}
void main()
{
    int i, n, c, remaining, min_val, min_index, j;
    struct proc p[10], temp;
    float avgtat = 0, avgtwt = 0;
    printf("<--Smallest Priority First Scheduling Algorithm (Preemptive)-->\n");
    printf("\nEnter Number of Processes:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        p[i] = read(i + 1);
    remaining = n;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++) {
            if (p[j].at > p[j + 1].at)
            {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    min_val = p[0].temp, min_index = 0;
    for (j = 0; j < n && p[j].at <= p[0].at; j++)
        if (p[j].temp < min_val)
            min_val = p[j].temp, min_index = j;
    i = min_index;
    c = p[i].ct = p[i].at + 1;
    p[i].rt--;
    if (p[i].rt == 0)
    {
        p[i].temp = MAX;
        remaining--;
    }
    while (remaining > 0)
    {
        min_val = p[0].temp, min_index = 0;
        for (j = 0; j < n && p[j].at <= c; j++)
            if (p[j].temp < min_val)
                min_val = p[j].temp, min_index = j;
        i = min_index;
        p[i].ct = c = c + 1;
        p[i].rt--;
        if (p[i].rt == 0)
        {
            p[i].temp = MAX;
            remaining--;
        }
    }
    printf("\nProcessNo\tAT\tBT\tPri\tCT\tTAT\tWT\n");
    for (i = 0; i < n; i++)
    {
        p[i].tat = p[i].ct - p[i].at;
        avgtat += p[i].tat;
        p[i].wt = p[i].tat - p[i].bt;
        avgtwt += p[i].wt;
        printf("P%d\t\t%d\t%d\t%d\t%d\t%d\t%d\n", p[i].no, p[i].at, p[i].bt, p[i].pri, p[i].ct, p[i].tat, p[i].wt);
    }
    avgtat /= n, avgtwt /= n;
    printf("\nAverage TurnAroundTime=%f\nAverage WaitingTime=%f", avgtat, avgtwt);
}
