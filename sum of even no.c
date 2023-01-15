//write a program to print sum of even no:
#include <stdio.h>

int main()
{   
    int n;
    printf("ENTER NO ");
    scanf("%d",&n);
    int i=2;
    int sum=0;
    while(i<=n)
    
    {  
       sum=i+sum;
        
        i=i+2;
        }
        printf("sum of even no  is :%d\n",sum);

    return 0;
}


