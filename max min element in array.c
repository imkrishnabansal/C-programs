#include <stdio.h>

int main()
{
    int n;
    printf("enter the range=");
    scanf("%d",&n);
    int i,m,a[n],max,min;
    printf("enter the no of elements you want to input=");
    scanf("%d",&m);
    printf("enter the elements in array\n");
    for(i=0;i<m;i++)
    scanf("%d",&a[i]);
    max=a[0];
    for(i=0;i<m;i++)
   {
    if(max<a[i])
    {
        max=a[i];
        i++;
    }
    if(max>a[i])
    {
        min=a[i];
        i++;
    }
   }
    printf("maximum element is=%d\nminimum element is=%d",max,min);
    
   
    return 0;
}


