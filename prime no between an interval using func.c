
#include <stdio.h>
void prime(int m,int n);
int main()
{   int a,b;
    printf("Enter the interval");
    printf("(a , b)");
    scanf(" %d %d ",&a,&b);
    prime(a,b);
    return 0;
}
void prime(int m,int n){
    int c=0,i,j;
    for(i=m;i<n;i++){
        for(int j=1;j<=i;j++){
        if(i%j==0)
            c++;
        }
        if(c==2)
        printf("%d",i);
        
    }
}

