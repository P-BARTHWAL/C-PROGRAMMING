/* 41. UNIT CONVERSION */
#include <stdio.h>

int main() 
{
    int choice;
    float n, cn;
        printf("Unit Conversion Menu:\n");
        printf("1. Kilometers to Meters (km -> m)\n");
        printf("2. Meters to Centimeters (m -> cm)\n");
        scanf("%d", &choice);
        switch (choice) 
        {
            case 1:
                printf("Enter value in Kilometers: ");
                scanf("%f", &n);
                cn = n * 1000;
                printf("%.2f km = %.2f m\n", n, cn);
                break;
            case 2:
                printf("Enter value in Meters: ");
                scanf("%f", &n);
                cn = n * 100; 
                printf("%.2f m = %.2f cm\n", n, cn);
                break;
                
            default:
                printf("Invalid choice ");
        }

    return 0;
}
