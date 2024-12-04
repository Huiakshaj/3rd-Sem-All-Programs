#include <stdio.h>
int main() {
    float principal, time, rate, simple_interest;
    printf("Enter Principal amount: ");
    scanf("%f", &principal);
    printf("Enter Time in years: ");
    scanf("%f", &time);
    printf("Enter Rate of interest: ");
    scanf("%f", &rate);
    simple_interest = (principal * time * rate) / 100;
    printf("Simple Interest = %.2f\n", simple_interest);
    return 0;
}
