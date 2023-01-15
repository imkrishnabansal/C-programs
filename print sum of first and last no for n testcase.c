#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,a;
    scanf("%d",&n);
    
    for(int i=n;i>0;i--){
        scanf("%d",&a);
        int c =log10(a);
       
       
         int l,s;
         l=a%10;
         s=pow(10,c);
         int f=a/s;
         printf("%d\n",l+f);
         
        n--;
     }
    return 0;
}

