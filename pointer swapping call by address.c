
#include <stdio.h>
void swap(int*a,int*b);
int main()
{  int x=10,y=20;
   printf("%d %d \n",x,y);
   swap(&x,&y);
   printf("%d %d ",x,y);
    

    return 0;
}
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("%d %d \n",*a,*b);
}

