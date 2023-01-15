#include <stdio.h>

int main()
{   int n;
    printf("ENTER TILL WHAT TERM YOU WANT TO STORE FIBONACCI SERIES ");
    scanf("%d",&n);
    
    int s[n];
    s[0]=0;
    s[1]=1;
    s[2]=1;
    
    for(int i=3;i<n;i++)
       s[i]=s[i-1]+s[i-2];
    printf("FIBONACCI SERIES: ");
    for(int i=0;i<n;i++)
    printf("%d ",s[i]);
    

    return 0;
}

