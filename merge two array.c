#include <stdio.h>

int main()
{
     int n1,n2,i,j=0;
     printf("enter the no of elements you want to input in 1st array=");
    scanf("%d",&n1);
    printf("enter the no of elements you want to input in 2nd array=");
    scanf("%d",&n2);
    int a1[n1],a2[n2],a[n1+n2];    
    printf("enter the elements in first array\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a1[i]);
        a[j]=a1[i];
        j++;
    }    
    printf("enter the elements in second array\n");
    for(i=0;i<n2;i++)
   {
       scanf("%d",&a2[i]);
       a[j]=a2[i];
        j++;
   }
    printf("merged array:\n ");
    for(j=0;j<n1+n2;j++)
    printf("%d ",a[j]);
    
    return 0;
}


