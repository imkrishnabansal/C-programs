
#include<stdio.h>

int main()
{  
    printf("ENTER NUMBER TO CHECK THE NUM IS FIBONACCI NUM OR NOT:\n");
    int a;
    scanf("%d",&a);
    int t1=0,t2=1,t3=1;

    for(int i=1;i<=a;i++){
        t1=t2;
        t2=t3;
        t3=t1+t2;
        if(a==t1||a==t2||a==t3){
        printf("YES");
          break;
        }
        
    }
    
    
  return 0;
}

