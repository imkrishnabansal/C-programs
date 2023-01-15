#include <math.h>
#include <stdio.h>

int main()
{
    int n,count;
    scanf("%d",&n);
    while(n>0)
    {
        count=log10(n)+1;
        printf("%d",count);
        break;
    }

    return 0;
}

