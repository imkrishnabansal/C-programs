#include <stdio.h>

int main()
{
    int  a,n,min,max;

    printf("How many numbers: ");
    scanf("%d", &n);
    printf("start entering number:");
    scanf("%d", &a);
    min = a;
    max = a;
    n--;
    while(n>0)
    { 
        scanf("%d",&a);
        if(a>max)
            max = a;
        if(a<min) 
            min = a;
        n--;
    }

    printf("Min is: %d\n", min);
    printf("Max is: %d", max);
  return 0;
}

