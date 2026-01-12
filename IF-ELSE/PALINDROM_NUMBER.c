/*21. PALINDROM NUMBERS */
#include <stdio.h>

int main() {
    int digit, num, s =0 , a;
    printf("Enter a number :");
    scanf("%d",&num);
    a=num;
    while (num>0)
    { digit = num % 10;
     s =s * 10 + digit;
     num=num/10;
    }
    if (s == a )
    {printf(" %d is a palindrom  number",a);}
    else 
    {printf (" %d is not palindrom number",a);}

    return 0;

}
