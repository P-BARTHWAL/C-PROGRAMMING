//Program to find sum of digits of a number
# include <stdio.h>
int main()
{
int num,d,i,sum=0;
printf("Enter a number:");
scanf("%d",&num);
d=num;
while (num!=0)
{ i=num%10;
  sum=sum+i;
  num=num/10;
}
printf("sum of digits in %d = %d",d,sum);
return 0;
}

