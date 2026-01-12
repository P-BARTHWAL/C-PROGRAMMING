/* 25. ELECTRICITY BILL */
#include <stdio.h>

int main() {
    int pmc,cc,u,bwt,m_ch,tb, unit = 6;
    printf(" Please enter the current meter reading : ");
    scanf("%d", &cc);
    printf(" Please enter the previous meter reading : ");
    scanf("%d", &pmc);
    u = cc - pmc;
    printf("THE UNIT COSUMPTION IS : %d\n " , u);
    bwt = u*6;
    printf(" Since 1 unit= 6 rupees , therefore bill without tax is : %d\n",bwt);
    printf (" Please enter a monthly charge : ");
    scanf("%d",&m_ch);
    float tax=(5*bwt)/100;
    printf (" Tax on your bill is : %f\n",tax);
    tb = bwt + m_ch + tax ;
    printf ("TOTAL BTLL = %d\n" , tb );
    printf (" THANK YOU ");
    return 0;
}



