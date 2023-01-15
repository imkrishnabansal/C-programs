#include <stdio.h>

int main()
{
   int n,i=1,fact=1;
   printf("ENTER NO:");
   scanf("%d",&n);
   while(i<=n)
   { fact=fact*i;
     i++;
   } 
   printf("FACTORIAL OF NUM IS %d",fact);
    return 0;
}
