/* 18. OLDEST AMONG THREE PERSONS */
#include <stdio.h>
int main() {
    int p1,p2,p3;
    printf("Enter the age of first person : ");
    scanf("%d", &p1);
    printf("Enter the age of second person : ");
    scanf("%d", &p2);
    printf("Enter the age of third person : ");
    scanf("%d", &p3);
    if((p2>p1) && (p2>p3))
    { printf("p2 having  age %d is OLDEST ", p2);}
    else if ((p1>p2)&&(p1>p3))
    { printf("p1 having  age %d is OLDEST ", p1);}
    else
    { printf("p3 having  age %d is OLDEST ", p3);}
    return 0;
}

