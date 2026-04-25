#include<stdio.h>
int main()
{
	int n,i,max=0,min=0,index1=0,index2=0;
	printf("Enter Limit :");
	scanf("%d",&n);
	int a[n];
	for(i=0; i<n; i++)
	{
		printf("Enter element :");
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=1; i<n; i++)
	{
		if(min>a[i])
		{
			index1=i;
			min=a[i];
		}
	}
	max=a[0];
	for(i=1; i<n; i++)
	{
		if(max<a[i])
		{
			index2=i;
			max=a[i];
		}
	}
	printf("\n Minimum value=%d",a[index1]);
	printf("\n Maximum value=%d",a[index2]);
}
