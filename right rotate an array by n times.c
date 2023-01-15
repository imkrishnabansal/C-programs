#include <stdio.h>

int main()
{
    int a[50];
    int n,i,j,m,temp;
    printf("ENTER HOW MUCH VALUE YOU WANT TO STORE:");
    scanf("%d",&n);
    
    printf("START ENTERING VALUES\n");

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    } 
    printf("ENTER HOW MANY TIMES YOU WANT TO RIGHT ROTATE THE ARRAY:\n");
        scanf("%d",&m);
    
    for(i=0;i<m;i++){
      for(j=n-1;j>=0;j--){
         if(j==n-1)temp=a[j];
         if(j>=0&&j<=n-2) a[j+1]=a[j];
         if(j==0) a[j]=temp;
      }  
    }    
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    
    return 0;
}


