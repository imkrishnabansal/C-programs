#include <stdio.h>
void reverse(int n)
{
    int r, sum=0;
    while(n>0)
    {
    r=n%10;
    sum=(sum*10)+r;
    n=n/10;
    }
    printf("reverse:%d", sum);
}
int main()
{
    int a;
    printf("enter the no.:");
    scanf("%d",&a);
    reverse(a);
    return 0;
}