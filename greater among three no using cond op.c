#include <stdio.h>

int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    
    (a>b&&a>c)?printf("%.2f is greater",a):(b>c&&b>a)?printf("%.2f is greater ",b):printf("%.2f is greater",c);

    return 0;
}

