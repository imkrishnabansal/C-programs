#include <stdio.h>

int main()
{
    int n;
    printf("enter the range=");
    scanf("%d",&n);
    int i,m,a[n],pos;
    printf("enter the no of elements you want to input=");
    scanf("%d",&m);
    printf("enter the elements in array\n");
    for(i=0;i<m;i++)
    scanf("%d",&a[i]);
    printf("enter the index of the element which you want to delete=");
    scanf("%d",&pos);
    for(i=pos;i<m-1;i++)
    {
        a[i]=a[i+1];
    }
    m--;
    for(i=0;i<m;i++)
    printf("%d ",a[i]);
    

    return 0;
}

