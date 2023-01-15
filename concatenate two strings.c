#include <stdio.h>

int main()
{
    char a[50]={"divya"};
    char b[50]={"gupta"};
    
    int i,j;
    for(i=0;a[i];i++)
    {
        
    }
    for(j=0;b[j];j++,i++)
    {
        a[i]=b[j];
    }
    printf("after concatenation\n");
    printf("%s",a);

    return 0;
}

