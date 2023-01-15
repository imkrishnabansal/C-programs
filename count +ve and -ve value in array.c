#include <stdio.h>

int main()
{
    int n,c1=0,c2=0;
    printf("ENTER HOW MUCH VALUE YOU WANT TO COUNT:\n");
    scanf("%d",&n);
    int value[n];
    printf("START ENTERING VALUE:\n");
    for(int i=0;i<=n-1;i++){
        scanf("%d",&value[i]);
        if(value[i]>0)
        c1++;
        if(value[i]<0)
        c2++;
    }
    printf("NO OF POSITIVE VALUE=%d",c1);
    printf("NO OF NEGATIVE VALUE=%d",c2);
    

    return 0;
}

