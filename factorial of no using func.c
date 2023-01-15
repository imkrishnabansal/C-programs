#include<stdio.h>
void factorial(int n)
{
    int r,fact=1;
    while (n>0)
    {
        r=n%10;
        for(int i=1;i<=r;i++)
        {
            fact=fact*i;
        }
        n=n/10;
    }
    printf("factorial of no.:%d",fact);
}
int main()
{
    int a;
    printf("enter the no:");
    scanf("%d",&a);
    factorial(a);
    return 0;
}