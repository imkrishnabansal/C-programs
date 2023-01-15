#include <stdio.h>

int main()
{
    int n;
    printf("enter the range=");
    scanf("%d",&n);
    int i,m,a[n],p,u;
    printf("enter the no of elements you want to input=");
    scanf("%d",&m);
    printf("enter the elements in array\n");
    for(i=0;i<m;i++)
    scanf("%d",&a[i]);
    printf("enter how many time you want to rotate=");
    scanf("%d",&u);
    for(int j=1;j<=u;j++)
   {
    p=a[0];
    for(i=1;i<m;i++)
    {
        a[i-1]=a[i];
    }
    a[m-1]=p;
   }
    printf("after left rotate\n");
    for(i=0;i<m;i++)
    printf("%d ",a[i]);
    


    return 0;
}

