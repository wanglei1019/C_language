#include "stdio.h"
#include "stdlib.h"
int main(void)
{
	int a[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int **p = (int**)malloc(3*sizeof(int*));
	for(int i=0;i<3;i++)
	{
		p[i] = (int*)malloc(4*sizeof(int));
	}
	for(int i=0;i<3;i++)
	{
		for(int j =0;j<4;j++)
		{
			p[i][j] = a[i][j];
			printf("%d ",p[i][j]); 
		}
		printf("\n");
	}
	printf("\n");
	for(int i=0;i<3;i++)
	{
		p[i] = (int*)realloc(p[i],5*sizeof(int));
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<5;j++)
		{
			printf("%d ",p[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<3;i++)
	{
		free(p[i]);
	}
	free(p);
}