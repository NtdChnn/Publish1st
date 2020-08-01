#include<stdio.h>
int main()
{
	int x,i,j;
	scanf("%d",&x);
	for(j=1;j<=x;j++)
	{
		for(i=1;i<=j;i++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
