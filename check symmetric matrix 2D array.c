#include <stdio.h>

int main()
{
    int a[3][3],f=0;
    printf(" START ENTERING VALUES: ");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        if(a[i][j]!=a[j][i]) {
            
        f=1;
        break;
        }}}
    
    if (f==0) printf(" THE MATRIX IS A SYMMETRIC MATRIX");
    else printf(" THA MATRIX IS NOT A SYMMETRIC MATRIX");
    
    return 0;
}

