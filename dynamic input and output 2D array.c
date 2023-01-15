
#include <stdio.h>

int main()
{
     int a[3][3];
     printf("ENTER VALUES IN ARRAY :\n");
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++) 
     scanf("%d",&a[i][j]);
        }
        
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++) 
     printf("%d",a[i][j]);
        printf("\n"); 
     }
     
     printf("\n%d",&a[0][0]);
     printf("\n%d",&a[0][1]);
     printf("\n%d",&a[0]+1);

    return 0;
}

