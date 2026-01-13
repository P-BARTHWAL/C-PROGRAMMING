/* 33. MENU -DRIVEN PROGRAM: Volume  of cube, cuboid , sphere  */
#include <stdio.h>
int main() {
    int choice;
    float ba, r, result, pi=3.14 , a ,b,h ;
    printf(" Enter your choice to display area [1.sphere , 2.cuboid  , 3. cube  ] :  ");
    scanf ("%d", &choice);
    switch (choice)
    { case 1: 
              printf (" Enter radius : ");
              scanf(" %f",&r);
              result = (4.0/3.0)* pi*r*r*r;
              printf("VOLUME  OF SPHERE  = %f ",result);
              break;
     case 2: 
             printf("Enter the length of rectangle : ");
             scanf ("%f", &a);
             printf("Enter the breath of rectangle : ");
             scanf ("%f", &b);
             printf("Enter the Height rectangle : ");
             scanf ("%f", &h);
             printf (" VOLUME OF CUBOID= %f", a*b*h );
             break;
     case 3: 
             printf(" Enter the value of base of CUBE  : ");
             scanf(" %f", &ba);
             printf ("VOLUME OF CUBE : %f ", ba*ba*ba);
             break;
    default :   
             printf (" INVALID INPUT ");
             break;
    }         
    return 0;
}
