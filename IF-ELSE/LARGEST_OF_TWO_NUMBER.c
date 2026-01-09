/* 3: Largest of two numbers*/
#include <stdio.h>
int main() {
    int x,y;
    printf(" Enter the value of x :");
    scanf("%d", &x);
    printf("Enter the value of y :");
    scanf("%d", &y);
    if (x>y)
    printf("%d is largest number ",x);
    else if (y>x)
    printf("%d is largest number",y);
    else
    printf("x is equal to y");
    return 0;
}


