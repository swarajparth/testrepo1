#include<stdio.h>
int main()
{
	int n;
	printf("Enter the index of pattern");
	scanf("%d",&n);
	for(i=0;i<n;++i)
	{
		for(j=0;j<n-i-1;++j)
			printf(" ");
		for(j=0;j<2*n-1;++j)
			printf("*");
		printf("\n);
	}
return 0;
}
