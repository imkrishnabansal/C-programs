
#include <stdio.h>

int main()
{
   int a[3][3]={1,2,3,4,5,6,7,8,9};
   int k;
   printf("ENTER THE NO. WHICH YOU WANT TO MULTIPY: ");
   scanf("%d",&k);
   for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
          
           printf("%d ",k*a[i][j]);
       }printf("\n");
   }
    return 0;
}

