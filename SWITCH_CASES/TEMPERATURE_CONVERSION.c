/*40. CONVERSION OF TEMPERATURE */
#include <stdio.h>
int main() {
    int choice;
    float t, ct;

    printf("Temperature Conversion Menu:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    scanf("%d", &choice);
    switch (choice) 
    {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &t);
            ct = (t * 9 / 5) + 32;
            printf("%.2f Celsius is equal to %.2f Fahrenheit.", t, ct);
            break;
        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &t);
            ct = (t - 32) * 5 / 9;
            printf("%.2f Fahrenheit is equal to %.2f Celsius.", t, ct);
            break;
        default:
            printf("Invalid choice ");
            break;
    }

    return 0;
}

