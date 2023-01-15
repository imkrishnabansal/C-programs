#include <stdio.h>
void prime(int n1,int n2)
{
   int c=0;
   for(int i=n1;i<=n2;i++)
   {
       for(int j=1;j<=i;j++)
       {
           if(i%j==0)
           c+=1;
       }
       if(c==2)
       printf("%d\n",i);
       c=0;
   }
    
}
int main()
{
    int a,b;
    printf("enter the interval:");
    scanf("%d%d",&a,&b);
    prime(a,b);
}