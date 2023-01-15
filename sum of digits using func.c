#include<stdio.h>
void sum(int n)
{
    int r,sum=0;
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
        
    }
    printf("sum of digits:%d",sum);
}
int main()
{
    int a;
    printf("enter the no.:");
    scanf("%d",&a);
    sum(a);
    return 0;
}