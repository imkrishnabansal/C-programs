#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,r1,r2;
    printf("enter a b c of ax^2 + bx +c\n");
    scanf("%f%f%f",&a,&b,&c);
    //eq is in ar^2+br+c
    r1=((-b+sqrt(b*b - 4*a*c))/2*a);
    r2=((-b-sqrt(b*b - 4*a*c))/2*a);
    int d=b*b-4*a*c;
    switch(d==0){
    case 1:printf("%.2f",r1);
        break;
    case 0:switch(d>0){ 
           case 1:printf("%.2f%.2f",r1,r2);  
           break;
           case 0: printf("roots are imaginary");
           break;
           }
    }

    return 0;
}

