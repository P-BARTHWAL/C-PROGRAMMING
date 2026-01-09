/* 10: Whether divisible by both 5 and 11*/
#include <stdio.h>

int main() {
    int x;
    printf(" Enter the value of x :");
    scanf("%d", &x);
    if (x%5 == 0 && x % 11 == 0)
    printf(" %d is divisible by both 5 and 11", x );
    else
    printf(" %d is not divisible by both 5 and 11", x );
    return 0;
}
