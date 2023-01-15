#include <stdio.h>

int main()
{
    int a[10];
    printf("enter the values in array\n");
    int i,sum=0;
    for(i=0;i<10;i++)
  {
    scanf("%d",&a[i]);
    if(i%2==0)
    sum=sum+a[i];
  }
   printf("sum of even index no is=%d",sum); 


    return 0;
}

