/* 17. YOUNGEST AMONG THREE PERSONS */
#include <stdio.h>
int main() {
    int p1,p2,p3;
    printf("Enter the age of first person : ");
    scanf("%d", &p1);
    printf("Enter the age of second person : ");
    scanf("%d", &p2);
    printf("Enter the age of third person : ");
    scanf("%d", &p3);
    if((p2<p1) && (p2<p3))
    { printf("p2 having  age %d is youngest ", p2);}
    else if ((p1<p2)&&(p1<p3))
    { printf("p1 having  age %d is youngest ", p1);}
    else
    { printf("p3 having  age %d is youngest ", p3);}
    return 0;
}


