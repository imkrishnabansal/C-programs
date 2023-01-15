#include <stdio.h>

int main()
{
    int n;
    printf("enter the range=");
    scanf("%d",&n);
    int i,m,a[n],j=0,k=0;
    printf("enter the no of elements you want to input=");
    scanf("%d",&m);
    int b[m],c[m];
    printf("enter the elements in array\n");
    for(i=0;i<m;i++)
    scanf("%d",&a[i]);
    
    for(i=0;i<m;i++)
  {
    if(a[i]%2==0)
    b[j++]=a[i];

    else
    c[k++]=a[i];
  }
    printf("array of even elements=");
    for(i=0;i<j;i++)
    printf("%d,",b[i]);
    printf("\b ");
    printf("\narray of odd elements=");
    for(i=0;i<k;i++)
    printf("%d,",c[i]);
    printf("\b ");
    
    return 0;
}


