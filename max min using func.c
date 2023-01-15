#include <stdio.h>

void maxmin(int,int);
void main()
{
  int m,n;
  printf("enter the no\n");
  scanf("%d%d",&m,&n);
  maxmin(m,n);
}

void maxmin(int m,int n)
{
  if(m>n)
  printf("max=%d\nmin=%d",m,n);
  else
  printf("max=%d\nmin=%d",n,m);
}

