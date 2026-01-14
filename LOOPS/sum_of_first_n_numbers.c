// Program to find sum of first N natural numbers
# include <stdio.h>
int main()
{
int num,i,N=0;
printf("Enter a natural number:");
scanf("%d",&num);
if (num>1)
{for (i=1;i<=num;i++)
 N=N+i;
 printf("Sum of first %d natural numbers are: %d",num,N);}
else
printf("Please enter a positive natural number");
return 0;
}

