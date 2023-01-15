#include <stdio.h>

int main()
{
    float price[3];
    for(int i=0;i<=2;i++){
        scanf("%f",&price[i]);
    }
    
    for(int j=0;j<=2;j++){
        price[j]+=0.18*price[j];
        
        printf("%f\n",price[j]);
        
    }

    return 0;
}

