//Program to print AP(Arithmetic Progression) series
# include <stdio.h>
int main()
{
int a,d,n,i;
printf("Enter first term:");
scanf("%d",&a);
printf("Enter common difference:");
scanf("%d",&d);
printf("Enter no.of terms:");
scanf("%d",&n);
printf("AP series=");
for(i=1;i<=n;i++)
{ printf("%d, ",a);
  a=a+d;
}
return 0;
}