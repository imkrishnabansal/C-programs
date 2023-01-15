#include <stdio.h>

int main()
{
    int a[5];
    int i,sum=0;
    printf("enter the values in array\n");
    for(i=0;i<=4;i++)
   { scanf("%d",&a[i]);
    if(a[i]%2==0)
    sum=sum+a[i];
   }
   printf("%d",sum);

    return 0;
}

