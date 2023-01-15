#include <stdio.h>
//pattern 5//
int main()
{
    char i,j;
    for(i='A';i<='E';i++)
    {
        for(j='A';j<=i;j++)
        {
            printf("%c",j);
        }printf("\n");
    }
    return 0;
}
