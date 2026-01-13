/* 28. MONTHS OF YEAR */
#include <stdio.h>
int main() {
    int num;
    printf( " Enter the number of month to be displayed [ 1,2,3,4,5,6,7,8,9,10,11,12] : "  );
    scanf("%d",&num);
    switch (num)
    { case 1:
         printf (" JANUARY ");
         break;
      case 2:
         printf(" FEBRURAY ");
         break;
      case 3: 
         printf (" MARCH ");
         break;
      case 4:
         printf (" APRIL ");
         break;
      case 5:
         printf (" MAY ");
         break;
      case 6:
         printf (" JUNE ");
         break; 
      case 7:
         printf (" JULY");
         break;
      case 8: 
         printf (" AUGUST ");
         break;
      case 9:
         printf (" SEPTEMBER ");
         break;
      case 10:
         printf (" OCTOBER");
         break;
      case 11:
         printf ("NOVEMBER ");
      case 12 :
         printf (" DECEMBER ");
         break;
     default: 
         printf (" INVALID VALUE ");
    }
    return 0;
}

