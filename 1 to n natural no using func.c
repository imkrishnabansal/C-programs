#include <stdio.h>

void natural(int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
    
}
int main()
{
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    natural(a);
}