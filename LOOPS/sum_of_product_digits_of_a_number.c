// Program to find the product of digits of a number
#include <stdio.h>
int main()
{
long int num,orig_num, product=1;
int digit;
printf("Enter a number: ");
scanf("%ld", &num);
orig_num = num;
if (num==0)
{product=0; }
else if (num<0)
num= -orig_num;
while (num!= 0)
{ digit = num % 10;
  product = product*digit;
  num = num/ 10; }

printf("Product of digits of number %ld = %ld", orig_num,product);
return 0;
}

