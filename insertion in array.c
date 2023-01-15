#include <stdio.h>

int main()
{
    int n;
    printf("enter the range=");
    scanf("%d",&n);
    int i,m,a[n],ele,pos;
    printf("enter the no of elements you want to input=");
    scanf("%d",&m);
    printf("enter the elements in array\n");
    for(i=0;i<m;i++)
    scanf("%d",&a[i]);
    printf("enter the element and its index\n");
    scanf("%d%d",&ele,&pos);
    for(i=m-1;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=ele;
    m++;
    for(i=0;i<m;i++)
    printf("%d ",a[i]);
    
    return 0;
}

