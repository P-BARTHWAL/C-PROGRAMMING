/* 26. ARTHIMETIC EXPRESSION */
#include <stdio.h>

int main() {
    int num1,num2,choice,result;
    printf("Enter your choice [1. ADD ,2.SUBTRACTION , 3.MULTIPLICATION ,4. DIVISION] :  ");
    scanf ("%d",&choice);
    printf("\nEnter the value of first number : ");
    scanf ("%d",&num1);
    printf("\nEnter the value of second number : ");
    scanf ("%d",&num2);
    switch(choice)
    { case 1: result = num1 + num2 ;
              printf(" ADDITION : %d ",result);
              break;
      case 2: result = num1 - num2;
              printf (" SUBTRACTION : %d", result);
              break;
      case 3: result = num1 * num2 ;
              printf(" MULTIPLICATION : %d ",result);
              break; 
      case 4: result = num1 / num2 ;
              printf(" DIVISION : %d ",result);
              break; 
      default : printf (" INVALID INPUT ");
    }
    return 0;
}
