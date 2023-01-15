#include <stdio.h>
void evenodd(int n1,int n2)
{
    int even=0,odd=0;
   
   for(int i=n1;i<=n2;i++)
   {
       if(i%2==0)
       {
           even=even+i;
       }
       else
       {
           odd=odd+i;
       }
   }
   printf("even:%d\n",even);
   printf("odd:%d\n",odd);
}
int main()
{
    int n1,n2;
   printf("starting value:");
   scanf("%d",&n1);
   printf("ending value:");
   scanf("%d",&n2);
   evenodd(n1,n2);
}