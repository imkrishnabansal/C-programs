#include <stdio.h>
#include <string.h>
int main()
{
    char a[20];
    printf("enter the string = ");
    fgets(a,20,stdin);
    int l=strlen(a);
    printf("%d",(l-1));
    
    return 0;
}

