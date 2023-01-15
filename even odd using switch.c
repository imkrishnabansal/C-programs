#include <stdio.h>

int main()
{   int num;
    scanf("%d",&num);
    
    switch (num%2==0){
    case 1:printf("EVEN");
      break;
    case 0: printf("ODD");
      break;}

    return 0;
}

