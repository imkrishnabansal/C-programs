#include <stdio.h>
void prime(int);
void main()
{
    int n;
    printf("enter a no=");
    scanf("%d",&n);
    prime(n);
}

void prime(int n)
{
    int c=0,i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==2)
    printf("yes it is prime");
    else
    printf("no it is not prime");
}
