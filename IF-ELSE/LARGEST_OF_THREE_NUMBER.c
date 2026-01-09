/* 4: Largest of three numbers*/
#include <stdio.h>
int main() {
    int x,y,z;
    printf(" Enter the value of x :");
    scanf("%d", &x);
    printf("Enter the value of y :");
    scanf("%d", &y);
    printf(" Enter the value of z :");
    scanf("%d", &z);
    if ((x>y) && (x>z))
    printf("%d is largest number ",x);
    else if ((y>x) && (y>z))
    printf("%d is largest number",y);
    else if ((z>x) && (z>y))
    printf("%d is largest number",z);
    else if ((x=y)||(y=z)||(x=z))
    printf("Any two variables are equal");
    else 
    printf("x, y ,z are equal");
    return 0;
}

