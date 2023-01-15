#include <stdio.h>

int main()
{
     int n;
    printf("enter the range=");
    scanf("%d",&n);
    int i,j,m,a[n],y,z;
    printf("enter the no of elements you want to input=");
    scanf("%d",&m);
    printf("enter the elements in array\n");
    for(i=0;i<m;i++)
    scanf("%d",&a[i]);
    for(i=0;i<m-1;i++)
    {
        for(j=0;j<m-1;j++)
        {
            if(a[j]>a[j+1])
           {
               z=a[j];
               a[j]=a[j+1];
               a[j+1]=z;
           }
        }
    }
    printf("after sorting:\ndata in ascending order\n");
    for(i=0;i<m;i++)
    printf("%d ",a[i]);
    printf("\n");
    printf("data in descending order\n");
    for(i=m-1;i>=0;i--)
    printf("%d ",a[i]);
    
    return 0;
}




