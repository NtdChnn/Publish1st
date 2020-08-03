#include<stdio.h>
int main()
{
	int x,i,j;
	scanf("%d",&x); //enter number of layers
	for(j=1;j<=x;j++)
	{
		for(i=1;i<=j;i++)
		{
			printf("* "); //print asterisk per layers to make triangle
		}
		printf("\n");
	}
	return 0;
}
