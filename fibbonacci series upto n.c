#include <stdio.h>

int main()
{
    int n;
    //enter the number:
    scanf("%d",&n);
    printf("FIBONACCI SERIES:\n");
    int t1=0,t2=1,t3=1;
    printf("%d,%d,%d,",t1,t2,t3);
    n=n-3;
    while(n>0){
        t1=t2;
        t2=t3;
        t3=t1+t2;
        if(n>1)
        printf("%d,",t3);
        if(n==1)
        printf("%d",t3);
        n--;
    }
    

    return 0;
}

