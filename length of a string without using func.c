#include <stdio.h>

int main()
{
    char a[20];
    printf("enter the string = ");
    fgets(a,20,stdin);
    int l,c=0;
    for(l=0;a[l];l++)
    {
        c++;
    }
    printf("%d",(c-1));
    
    return 0;
}

