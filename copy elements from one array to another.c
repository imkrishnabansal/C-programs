#include <stdio.h>

int main()
{
    int n;
    printf("enter the range=");
    scanf("%d",&n);
    int i,m,a[n],b[i];
    printf("enter the no of elements you want to input=");
    scanf("%d",&m);
    printf("enter the elements in first array\n");
    for(i=0;i<m;i++)
   
    scanf("%d",&a[i]);

   printf("elements copies in second array\n");
   for(i=0;i<m;i++)
   
 { int b[i];
   b[i]=a[i];

    printf("%d ",b[i]);
  }
    return 0;
}

