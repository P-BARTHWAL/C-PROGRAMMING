
//Program to check a palindrome number
#include <stdio.h>
int main()
{
int num,digit,orig_num,rev=0 ;
printf("Enter a number:");
scanf("%d",&num);
orig_num= num;
while(num>0)
{ digit= num%10;
  rev=rev*10+digit ;
  num= num/10;
}
if (orig_num==rev)
printf("%d is a palindrome number",orig_num);
else
printf("%d is not a palindrome number",orig_num);
return 0;
}

