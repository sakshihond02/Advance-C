#include<stdio.h>
struct emp
{
	int eno;
	char ename[20],desi[20],dept[20];
	float salary;
}e1[20];

void main()
{
	int n,num,i,flag=0,index;
	printf("Enter Limit :");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		printf("Enter eno :");
		scanf("%d",&e1[i].eno);
		printf("Enter ename :");
		scanf("%s",&e1[i].ename);
		printf("Enter design :");
		scanf("%s",&e1[i].desi);
		printf("Enter Salary :");
		scanf("%f",&e1[i].salary);
		printf("Enter department :");
		scanf("%s",&e1[i].dept);
	}
	
	printf("Enter eno to search :");
	scanf("%d",&num);
	
	for(i=0; i<n; i++)
	{
		if(num==e1[i].eno)
		{
			flag=1;
			index=i;
		}
	}
	if(flag==1)
	{
		printf("\neno=%d",e1[index].eno);
		printf("\nename=%s",e1[index].ename);
		printf("\ndesignation=%s",e1[index].desi);
		printf("\nSalary=%.2f",e1[index].salary);
		printf("\ndepartment=%s",e1[index].dept);
	}
	else
	printf("Not Found..");
}
