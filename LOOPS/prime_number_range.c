
// Program to print prime numbers in a range
#include<stdio.h>
int main()
{
int l1,l2,i,j,count=0;
printf("Enter a lower range:");
scanf("%d",&l1) ;
printf("Enter a upper range:");
scanf("%d",&l2) ;
printf("Prime numbers between %d to %d are:\n",l1,l2);
for(i=l1; i<=l2; i++)
{ for(j=2;j*j<i; j++)
  { if(i%j==0)
   { count=count+1;
     break;
   }
  }
if(count==0 && i!=1)
printf("%d,", i);
count = 0;
}
return 0;
}