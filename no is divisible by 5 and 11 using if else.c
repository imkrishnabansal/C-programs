#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   
   if (n%5==0&&n%11==0) 
  {printf("no is divisible by 5 and 11 ");
  }
  else if (n%5==0&&n%11!=0)
  { printf("no is not divisible by 11 but divisible by 5");}
  else if (n%11==0&&n%11!=0)
  { printf("no is not divisible by 5 but divisible by 11");}
  else 
  printf("no is not divisible by 5 and as well as 11");
  

    return 0;
}

