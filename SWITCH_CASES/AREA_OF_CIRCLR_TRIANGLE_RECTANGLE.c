/* 32. MENU -DRIVEN PROGRAM: Area of circle, rectangle,triangle */
#include <stdio.h>
int main() {
    int choice;
    float a ,b,r, result, pi=3.14,ba ,h;
    printf(" Enter your choice to display area [1.Circle, 2.Rectangle , 3.Triangle ] :  ");
    scanf ("%d", &choice);
    switch (choice)
    { case 1:
              printf (" Enter radius : ");
              scanf(" %f",&r);
              result = pi*r*r;
              printf("AREA OF CIRCLE = %f ",result);
              break;
     case 2: 
             
             printf("Enter the length of rectangle : ");
             scanf ("%f", &a);
             printf("Enter the breath of rectangle : ");
             scanf ("%f", &b);
             printf ("AREA OF RECTANGLE = %f", a*b);
             break;
     case 3: 
             printf (" Enter the value of base of triangle : ");
             scanf(" %f", &ba);
             printf(" Enter the value of height of triangle : ");
             scanf(" %f", &h);
             printf ("AREA OF TRIANGLE : %f ", (0.5)*ba*h);
             break;
    default :   
             printf (" INVALID INPUT ");
             break;
    }         
    return 0;
}