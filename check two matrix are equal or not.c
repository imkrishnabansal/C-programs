
#include <stdio.h>

int main()
{
    int a[3][3];
    int b[3][3];
    int f=0;
    
    printf("START ENTERING VALUES IN FIRST MATRIX:\n");
    for( int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
            
        }
    }
    printf("START ENTERING VALUES IN SECOND MATRIX:\n");
    for( int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            
        }
    }
    
    for( int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a[i][j]!=b[i][j]){
              f++; 
              break;
            }
            
        }
    }
    if(f==0) printf("MATRIX ARE EQUAL");
    if(f!=0) printf("MATRIX ARE NOT EQUAL"); 
   
    return 0;
}

