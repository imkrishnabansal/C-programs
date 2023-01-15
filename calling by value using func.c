
#include <stdio.h>
void swap(int ,int);

int main()
{   
    int a,b;
    scanf("%d%d",&a,&b);
    printf("before calling the value of a&b %d %d\n",a,b);
    swap(a,b);
    printf("after calling the value of a&b %d %d",a,b);
    
    

    return 0;
}
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("%d %d\n",a,b);
    return(b);
}

