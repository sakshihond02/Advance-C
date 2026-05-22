#include<stdio.h>
struct student
{
	int sno;
	char sname[10];
	float per;
};
struct student s1[50];
void main()
{
	int i,index,n;
	float max;
	printf("Enter Limit :");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		printf("Enter sno :");
		scanf("%d",&s1[i].sno);
		printf("Enter sname :");
		scanf("%s",&s1[i].sname);
		printf("Enter per :");
		scanf("%f",&s1[i].per);
	}
	max=s1[0].per;
	index=0;
	for(i=1; i<n; i++)
	{
		if(s1[i].per>max)
		{
			max=s1[i].per;
			index=i;
		}
	}
	printf("\nStudent no=%d",s1[index].sno);
	printf("\nStudent Name=%s",s1[index].sname);
	printf("\nStudent Per=%f",s1[index].per);
}
