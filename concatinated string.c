#include<stdio.h>
#include<string.h>
void main()
{
	char s1[20],s2[20];
	int i,j;
	printf("enter 1st string :");
	scanf("%s",s1);
	printf("enter 2nd string :");
	scanf("%s",s2);
	
	for(i=0; s1[i]!='\0'; i++)
	for(j=0; s2[j]!='\0'; j++,i++) 
	  {
	  	 s1[i]=s2[j];
	  }
	  s1[i]='\0';
	  printf("concatinated string=%s",s1);
}
