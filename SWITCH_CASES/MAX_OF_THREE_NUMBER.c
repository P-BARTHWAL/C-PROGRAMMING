/*36. MAX OE THREE NUMBERS */

#include <stdio.h>
int main() {
    int num1, num2, num3;
    printf("Enter three integers to find the maximum: \n");
    scanf("%d %d %d", &num1, &num2, &num3);
    switch (num1 > num2) 
    {
        case 1: 
            {switch (num1 > num3) 
            {
                case 1:
                    printf("%d is the maximum.", num1);
                    break;
                case 0:
                    printf("%d is the maximum.", num3);
                    break;
            }
            break;}
        case 0:
           { switch (num2 > num3) 
            {
                case 1:
                    printf("%d is the maximum.\n", num2);
                    break;
                case 0:
                    printf("%d is the maximum.\n", num3);
                    break;
            }
            break;}
            
    }

    return 0;
}


