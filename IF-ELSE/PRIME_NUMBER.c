
/* 11.  PRIME NUMBER */
#include <stdio.h>

int main() {
    int num,i, count=0;
    printf("Enter  number to check : ");
    scanf("%d", &num );
    for(i=2;i<num ;i++)
    {if (num%i==0) 
      count++;}
    if (count>0)
    printf("%d is not  a prime number ",num);
    else
    printf(" %d is a prime number", num );
    return 0;
}

