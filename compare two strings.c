#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],b[50];
	int value;//declaration of integer variable
	printf("enter the first string = ");
	fgets(a,50,stdin);
	printf("enter the second string = ");
	fgets(b,50,stdin);
	//comparing both the functions using strcmp()function
	value=strcmp(a,b);
	if(value==0)
	printf("strings are same.");
	else
	printf("strings are not same.");
	return 0;
}



