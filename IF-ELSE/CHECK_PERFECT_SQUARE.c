
/* 23. PERFECT SQUARE */
#include <stdio.h>
int main() {
    int a,i ,count=0;
    printf("Enter a number : ");
    scanf("%d",&a);
    for(i =1; i <= a/2;i++)
    { if(i*i==a)
       {count++;}}
    if  (count>0)
      {printf (" %d is a perfect square ", a);}
    else 
    {printf(" %d is Not a prfect square",a);}
    return 0;
}
