#include <stdio.h>

int main()
{
    int n;
    printf("enter the range=");
    scanf("%d",&n);
    int i,m,a[n],count_even=0,count_odd=0;
    printf("enter the no of elements you want to input=");
    scanf("%d",&m);
    printf("enter the elements\n");
    for(i=0;i<m;i++)
  {  scanf("%d",&a[i]);
    if(a[i]%2==0)
    count_even++;
    if(a[i]%2!=0)
    count_odd++;
  }
    printf("count_even=%d\ncount_odd=%d",count_even,count_odd);
    
    return 0;
}

