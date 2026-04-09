#include<stdio.h>
int main()
{
	int a[20][20],b[20][20],c[20][20],i,j,rows,cols;
	printf("Enter Number of Rows & Colums :");
	scanf("%d %d",&rows,&cols);
	printf("Enter Elements of First Matrix :");
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter Elements of Second Matrix :");
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\n Addition of Two Matrix :\n");
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf("%d",c[i][j]);
		}
	}
	printf("\n ");
}
