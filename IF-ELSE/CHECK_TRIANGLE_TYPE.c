/*20. check whether a triangle is scalene, isosceles or equilateral */
#include <stdio.h>
int main() {
    int s1, s2 ,s3;
    printf ( " Enter the  three sides of triangle : ");
    scanf ( " %d\n%d\n%d",&s1,&s2,&s3);
    if (s1 <0)
     {printf(" Invalid value of s1\n ");}
    if (s2 < 0)
     { printf (" Invalid value of s2\n ");}
    if (s3 < 0)
     {printf (" Invalid value of s3\n");}
    if ( (s1+s2> s3) && (s2+s3 > s1) && (s1+s3 > s3 ))
     { if ((s1!= s2) && ( s1!=s3) && ( s2!=s3))
       { printf (" Its a Scalene Triangle ");}
      else if ((s1==s2)&& (s2==s3) && (s1==s3))
        { printf ("Its a Equilateral triangle ");}
      else
        {printf (" Its a Isosceles triangle ");} 
      }
    else
      {printf("INVALID TRIANGLE");}
return 0;
}
