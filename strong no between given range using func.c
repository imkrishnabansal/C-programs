#include <stdio.h>
void strong(int sn,int en)  
{  
    int i, n, n1,sum=0,j,k;
    long fact; 
    
 for(k=sn;k<=en;k++)
   {
     n1=k;
     sum=0;  
 
    for(j=k;j>0;j=j/10) 
    {  
  
        fact = 1;  
          for(i=1; i<=j % 10; i++)  
           {  
            fact = fact * i;  
           }  
            sum = sum + fact;  
    }  
  
    if(sum==n1)  
       
        printf("%d  ", n1); 
  }  
        printf("\n\n"); 
}


int main()
{
    int sn,en;
    printf("Input starting range of number : ");  
    scanf("%d", &sn);
    printf("Input ending range of number: ");  
    scanf("%d", &en); 
    printf("\n\nThe Strong numbers are :\n"); 
    strong(sn,en);

}