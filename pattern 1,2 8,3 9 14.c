#include <stdio.h>
 
int main() {
	int i,j,k=0,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=i;
		for(j=1;j<=i;j++)
		{
			printf("%d ",k);
	         k+=n-j;
		}
		printf("\n");
 
	}
 
	return 0;
}