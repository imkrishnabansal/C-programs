#include <stdio.h>

int main()
{
    int m;
    printf("enter range=");
    scanf("%d",&m);
    int n,a[m],i;
    printf("enter the no of elements which u want to give=");
    scanf("%d",&n);
    printf("enter the elements in array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for(i=0;i<n;i++)
   {
    if(a[i]<0)
    printf("%d\n",a[i]);
   }
    
    return 0;
}

