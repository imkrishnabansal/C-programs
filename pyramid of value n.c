
#include <stdio.h>

int main()
{   int n,a=0;
    scanf("%d",&n);
    for(int i=1;i<(n);i++){
        for(int j=1;j<=2*n-1;j++){
            if(j>=n-a&&j<=n+a)
            printf("* ");
            else printf("  ");
            }
            a++;
            printf("\n");
    }
    
    
    

    return 0;
}


