#include<stdio.h>
#include<string.h>
void main()
{
	char s1[20],s2[20];
	int i;
	
	printf("enter the string :");
	gets(s1);
	
	for(i=0; s1[i]!='\0'; i++)
	  {
	  	s2[i]=s1[i];
	  }
	  
	  printf("copied string=%s",s2);
}
