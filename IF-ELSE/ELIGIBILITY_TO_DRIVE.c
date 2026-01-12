/*16. ELIGIBILITY TO DRIVE */
#include <stdio.h>
int main() {
    int age;
    printf (" Enter your age : ");
    scanf ("%d", &age);
    if (age<=0)
    {printf (" INVALID AGE ");}
    else
    {
         if(age >= 18)
         {printf (" You are eligible to DRIVE ");}
         else
         { printf ( "You are not eligible to DRIVE ");}
    }
    return 0;
}
