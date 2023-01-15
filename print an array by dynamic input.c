#include <stdio.h>

int main()
{
    int n;
    printf("enter the range=");
    scanf("%d",&n);
    int i,m,a[n];
    printf("enter the no of elements which you want to input=");
    scanf("%d",&m);
    printf("enter the elements\n");
    for(i=0;i<m;i++)
    scanf("%d",&a[i]);
    for(i=0;i<m;i++)
    printf("%d\n",a[i]);
    return 0;
}

