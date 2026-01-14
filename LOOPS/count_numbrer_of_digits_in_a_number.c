#include <stdio.h>
int main() {
    int num ,c=0 ;
    printf("Enter a number : ");
    scanf("%d",&num);
    while(num!=0)
    { c=c+1;
      num = num/10 ;}
    if(c!=0) 
       {printf("number of digits in the inputted number is : %d ",c);}
    else
        {printf(" INVALID INPUT");}  
    return 0; }  
