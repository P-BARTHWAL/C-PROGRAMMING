/*19. check whether a triangle is valid or not */
#include <stdio.h> 

int main() {
    int s1, s2 ,s3;
    printf ( " Enter the  three sides of triangle :\n ");
    scanf ( " %d\n%d\n%d",&s1,&s2,&s3);
    if (s1 <0)
     {printf(" Invalid value of s1\n ");}
    if (s2 < 0)
     { printf (" Invalid value of s2\n ");}
    if (s3 < 0)
     {printf (" Invalid value of s3\n");}
    if ( (s1+s2> s3) && (s2+s3 > s1) && (s1+s3 > s3 ))
    { int a1,a2,a3, Sum;
      printf ( " Enter the  three angles of triangle : ");
      scanf ( " %d\n%d\n%d",&a1,&a2,&a3);
      Sum = a1+ a2+ a3;
      if (( Sum == 180) && (a1>0) && (a2>0) && (a3>0))
         {printf(" Its a valid triangle with %d ,%d and %d angles. ", a1,a2,a3);}
      else
          {printf (" INVALID TRIANGLE");}
    }   
    else 
     {printf (" INVALID TRIANGLE ");}
    return 0;
}

