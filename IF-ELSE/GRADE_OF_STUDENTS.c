
/*13. GRADE OF STUDENTS */
#include <stdio.h>
int main() {
    int marks;
    printf ( " Enter your marks :  ");
    scanf ("%d", &marks);
    if (marks> 100)
    { printf (" INVALID INPUT ");}
    else 
    {
     if( marks >= 90 )
     { printf ( " GRADE = 'A+' ");}
     else if (( marks>=80)&& (marks <90))
     {printf (" GRADE = 'A' ");}
     else if ((marks >= 70) && (marks < 80))
     {printf ( " GRADE = 'B' ");}
     else if (( marks>=50)&& (marks <70))
     {printf (" GRADE = 'C' ");}
     else if ((marks >= 30) && (marks < 50))
     {printf ( " GRADE = 'D' ");}
     else 
     {printf (" FAIL");}
    }
    return 0;
}