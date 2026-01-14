#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    float a,r,term;
    printf("Enter the first term, common ratio and number of terms of the GP series:\n");
    scanf("%f%f%d",&a,&r,&n);
    printf("The GP series is:\n");
    for(i=0;i<n;i++)
    {
        term=a* pow(r,i);
        printf("%.2f ",term);
    }
    return 0;
}
