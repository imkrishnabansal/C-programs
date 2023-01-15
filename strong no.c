#include <stdio.h>
int main()
{
    int n,sum=0,fac;
    scanf("%d",&n);
    int t=n;
    while(n>0){ 
        int k=n%10;
        fac=1;
        for(int i=1;i<=k;i++){
            fac=fac*i;}
        sum=sum+fac;
        n=n/10;}
        
        if(sum==t)
        printf("%d is strong number",t);
        else
        printf("%d is not a strong number",t);
        
    return 0;
}


