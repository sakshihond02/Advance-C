#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],c[2][2],i,j,k,sum=0;
	printf("Enter the Array Element of a[2][2] :");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the Array Element of b[2][2] :");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("Multiply Matrix a[2][2]*b[2][2] :");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			for(k=0; k<2; k++)
			{
				sum=sum+a[i][k]*b[k][j];
			}
			c[i][j]=sum;
		}
	}
	printf("Display Result of Multiplication :");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("\t%d",c[i][j]);
		}
		printf("\n");
	}
}
