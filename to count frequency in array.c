#include <stdio.h>

int main()
{
    int n;
    printf("ENTER HOW MUCH VALUE YOU WANT TO ENTER:\n");
    scanf("%d",&n);
    int value[n];
    printf("START ENTERING VALUE:\n");
    for(int i=0;i<=n-1;i++){
        scanf("%d",&value[i]);
        
    }
    int fr[n];
    
    
    for(int i=0;i<n;i++){
        int count =1;
        if(value[i]!=-1){
        for(int j=i+1;j<n;j++){
        if(value[i]==value[j])
           count++;
           value[j]=-1;
        }
            
        }
        fr[i]=count;
            
        
    }
    

    printf("---------------------\n");    
    printf(" Element | Frequency\n");    
    printf("---------------------\n");    
    for(int i = 0; i < n; i++){    
        if(value[i]!=-1){    
            printf("    %d", value[i]);    
            printf("    |  ");    
            printf("  %d\n",fr[i]);    
        }    
    } 
    
    
        
        
    

    return 0;
}

 