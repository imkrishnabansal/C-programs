#include <stdio.h>

int main()
{
    char a[20];
    printf("enter the string = ");
    scanf("%[^\n]s",a);
    printf("%s",a);

    return 0;
}

