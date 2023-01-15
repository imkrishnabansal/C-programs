#include <stdio.h>

void evenodd(int);
void main()
{
  int n;
  printf("enter the no\n");
  scanf("%d",&n);
  evenodd(n);
}

void evenodd(int n)
{
  if(n%2==0)
  printf("even");
  else
  printf("odd");
  
}  
