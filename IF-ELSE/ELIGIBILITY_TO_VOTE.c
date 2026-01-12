/*15. ELIGIBILITY TO VOTE */
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
         {printf (" You are eligible to VOTE ");}
         else
         { printf ( "You are not eligible to vote ");}
    }
    return 0;
}
