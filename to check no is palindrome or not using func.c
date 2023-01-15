#include <stdio.h>
void palindrome(int n)
{
    int r,c,sum=0;
    c=n;
    while(n>0)
    {
    r=n%10;
    sum=(sum*10)+r;
    n=n/10;
    }
    if(sum==c)
    printf("n0. is palindrome");
    else
    printf("not palindrome");
}
int main()
{
    int a;
    printf("enter the no.:");
    scanf("%d",&a);
    palindrome(a);
    return 0;
}