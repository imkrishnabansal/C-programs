#include <stdio.h>

int main()
{
    int n;
    printf("enter the range=");
    scanf("%d",&n);
    int i,m,a[n],f=0,k,ele;//k is for position
    printf("enter the no of elements you want to input=");
    scanf("%d",&m);
    printf("enter the elements in array\n");
    for(i=0;i<m;i++)
    scanf("%d",&a[i]);
    printf("enter the element to search=");
    scanf("%d",&ele);
    for(i=0;i<m;i++)
   {
    if(a[i]==ele)
   {
   
    f=1;
    k=i+1;
    break;
   }
   }
   if(f==1)
   printf("element found at %d position",k);
   else
   printf("not found");

   return 0;
}


