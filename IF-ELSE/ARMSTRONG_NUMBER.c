/* 22. ARMSTRONG NUMBERS */ 
#include <stdio.h>
int main() {
    int num, org_num , a=0 , s;
    printf (" Enter a number to  check ");
    scanf("%d", &num );
    org_num = num;
    while (num>0)
      { s = num % 10;
        a+= s*s*s;
        num = num/10;
      }
    if(org_num == a )
     { printf (" ARMSTRONG NUMBER ");}
    else
     { printf (" NOT A AARMSTRONG  NUMBER ");}
    return 0;
}



