#include <stdio.h>

int main()
{
    int a[5];
    int i,count_p=0,count_n=0;
    printf("enter the values in array\n");
    for(i=0;i<=4;i++)
   {
    scanf("%d",&a[i]);
    if(a[i]>0)
    count_p++;
    if(a[i]<0)
    count_n++;
   }
    printf("count_p=%d\ncount_n=%d",count_p,count_n);
    return 0;
}

