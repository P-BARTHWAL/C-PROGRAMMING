
#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, simple_interest, compound_interest;
    int choice;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time period (in years): ");
    scanf("%f", &time);
    printf("\nSelect the type of interest to calculate:\n");
    printf("1. Simple Interest\n");
    printf("2. Compound Interest\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
        
            simple_interest = (principal * rate * time) / 100;
            printf("\nSimple Interest = %.2f\n", simple_interest);
            break;

        case 2:

            compound_interest = principal * (pow((1 + rate / 100), time));
            compound_interest = compound_interest - principal;
            printf("\nCompound Interest = %.2f\n", compound_interest);
            break;

        default:
            printf("\nInvalid choice! Please enter 1 or 2.\n");
            break;
    }

    return 0;
}