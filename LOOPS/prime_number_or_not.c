
//Program to check whether a number is prime or not.
#include <stdio.h>
int main()
{
int num,i,flag=0;
printf("Enter a number:");
scanf("%d",&num);
for(i=1;i<=num;i++)
{if (num%i==0)
flag=flag+1;
}
if (flag==2)
printf("%d is a prime number",num);
else
printf("%d is not a prime number",num);
return 0;
}



