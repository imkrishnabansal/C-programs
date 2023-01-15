#include <stdio.h>

int main()
{
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    
    
    switch (num1>num2){
    case 1 :printf("num 1 is maximum");
            break;
    case 0 :printf("num 2 is maximum ");
            break;
    }

    return 0;
}

