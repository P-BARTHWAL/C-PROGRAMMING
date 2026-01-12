/* 24.  DIVISIBLE BY BOTH 3 AND 7 */
#include <stdio.h>
int main() {
    int a;
    printf(" Enter a number to  check : ");
    scanf("%d", &a);
    if ((a%3==0)&& (a%7==0))
      {printf ("%d is divisible by both 3 and 7",a);}
    else 
      {printf(" Not divisble by both 3 and 7 ");}
    return 0;
}


