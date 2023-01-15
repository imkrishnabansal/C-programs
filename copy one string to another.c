#include <stdio.h>

int main()
{
    char a[100],b[100];
    printf("enter the string = ");
    fgets(a,40,stdin);
    int i;
    for(i=0;a[i];i++)
    {
        b[i]=a[i];
    }
    b[i]=0;
    printf("string = %s\ncopied string = %s",a,b);
    

    return 0;
}

