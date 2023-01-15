#include <stdio.h>
#include <math.h>
void cubeofano(int);

void main()
{
    int n;
    scanf("%d",&n);
    cubeofano(n);

}
void cubeofano(int n)
{
  printf("%lf",pow(n,3));
}

