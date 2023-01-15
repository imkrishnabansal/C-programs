#include <stdio.h>

int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int t=n;
    for(int i=1;i<n;i++){
        if(n%i==0)
        sum=sum+i;}
        
    if(sum==t)
        printf("%d is perfect number",n);
    else
        printf("%d is not a perfect number",n);
        
    return 0;
}


