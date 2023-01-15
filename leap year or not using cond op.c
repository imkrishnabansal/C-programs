#include <stdio.h>

int main()
{
    int year;
    scanf("%d",&year);
    
    (year%4==0&&(year%400==0||year%100!=0))?printf("%dis leap year",year):printf("%d is not a leap year",year);

    return 0;
}

