#include <stdio.h>

int main()
{
    int a[5];
    int i;
    printf("enter the values in array\n");
    for(i=0;i<=4;i++) 
    scanf("%d",&a[i]);
    
    printf("\n");
    
    for(i=4;i>=0;i--)
    printf("%d\n",a[i]);
    
    return 0;
}

