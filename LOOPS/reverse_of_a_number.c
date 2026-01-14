//Program to reverse a number
# include <stdio.h>
int main()
{
int num,digit,rev=0 ;
printf("Enter a number:");
scanf("%d",&num);
while(num!=0)
{ digit=num%10;
  rev=rev*10+digit;
  num=num/10;
}
printf("Reverse of a given number is %d",rev);
return 0;
}

