
#include <stdio.h>

int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9},i,j;
    int temp;
    printf("ENTER THE ELEMENT YOU WANT TO MULTIPLY THE MATRIX");
    scanf("%d",&k);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {   a[i][j]=k*a[i][j];
           printf("%d",a[i][j]);
            
    return 0;
}

