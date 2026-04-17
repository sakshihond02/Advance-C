#include<stdio.h>
int main()
{
	char s1[50];
	int i;
	printf("Enter string :");
	gets(s1);
	for(i=0; s1[i]!='\0'; i++)
	{
		if(s1[i]>='A' && s1[i]<='Z')
		{
			s1[i]=s1[i]+32;
		}
	}
	puts(s1);
}
