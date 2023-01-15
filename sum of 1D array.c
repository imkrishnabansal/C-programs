#include <stdio.h>

int main()
{
    int a[5],sum=0;

    printf("ENTER THE VALUE");
    for(int i=0;i<=4;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("%d",sum);
    

    return 0;
}

