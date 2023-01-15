#include <stdio.h>

void circle(float);
void main()
{
    int r;
    scanf("%d",&r);
    circle(r);

}
void circle(float r)
{
  printf("diameter=%lf\ncircumference=%lf\narea=%lf",2*r,2*3.14*r,3.14*r*r);
}    
