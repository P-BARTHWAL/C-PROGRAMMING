// Program to find sum of cubes of first N natural numbers
#include <stdio.h>
int main()
{
int num,i,sum;
printf("Enter a positive number:");
scanf("%d",&num);
sum=0;
if(num>0)
{for(i=1;i<=num;i++)
{printf("%d^3=%d \n",i ,i*i*i);
sum=sum+(i*i*i);
}
printf("Sum of cubes of first %d natural numbers= %d" ,num,sum); }
else
printf("Please enter positive natural number(starting from 1)");
return 0;
}

