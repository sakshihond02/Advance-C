#include<stdio.h>
int main()
{
	float avg;
	int a[5],i,sum=0;
	printf("Enter Subject Marks :");
	for(i=0; i<5; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Display average of Marks :");
	for(i=0; i<5; i++)
	{
		sum=sum+a[i];
		avg=sum/5;
	}
	printf("Average=%f",avg);
}                     
