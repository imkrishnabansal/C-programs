#include <stdio.h>
void sum(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum=%d",sum);
}
int main()
{
    int n;
    printf("enter the no.:");
    scanf("%d",&n);
    sum(n);
}