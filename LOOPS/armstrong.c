




//Program to check whether a number is armstrong or not
#include <stdio.h>
int main()
{
int num,orig_num,digit,a=0 ;
printf("Enter a number:");
scanf("%d",&num);
orig_num = num ;
while (num>0)
{ digit= num%10;
  a= a+(digit*digit*digit) ;
  num= num/10;
}
if (orig_num==a)
printf("%d is armstrong number",orig_num);
else
printf("%d is not armstrong number",orig_num);
return 0;
}

