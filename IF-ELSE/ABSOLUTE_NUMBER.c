/* 9: Absolute value of a number*/
#include <stdio.h>

int main() {
    int num, a;
    printf (" Enter a number to display its absolute value : ");
    scanf("%d", &num);
    if (num>=0)
      a = num;
    else
      a = - num;
 printf(" The absolute value  %d is %d ",num,a);
 return 0;
}