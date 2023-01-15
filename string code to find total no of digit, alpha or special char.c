
#include <stdio.h>

int main()
{
    char a[100];
    fgets(a,100,stdin);
    int alphabets=0,digits=0,specialchar=0;
    for(int i=0;a[i];i++){
        if(a[i]>=65&&a[i]<=90 )
            alphabets++;
        else if(a[i]>=97&&a[i]<=122)
            alphabets++;
        else if(a[i]>=48&&a[i]<=57)
            digits++;
        else specialchar++;   
        
    }
    printf("alphabets are %d \ndigits are %d \nspecialchar are %d\n",alphabets,digits,specialchar-1);

    return 0;
}

