#include<stdio.h>
#include<string.h>
void main()
{
	int ch;
	printf("press 1: palindrome or not");
	printf("\npress 2: compare two strings");
	printf("\npress 3: strings equal or not");
	printf("\npress 4: count vowels");
	printf("\npress 5: strings concatenate");
	printf("\nenter choice :");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			{
				char s1[50],s2[50];
				printf("enter string :");
				scanf("%s",s1);
				strcpy(s2,s1);
				strrev(s1);
				if(strcmp(s1,s2)==0)
				  printf("string is palindrome");
				else
				  printf("string is not palindrome");
				break;
			}
		case 2:
		    {
		    	char s1[50],s2[50];
		    	int cmp;
		    	printf("enter 1st string :");
		    	scanf("%s",s1);
		    	printf("enter 2nd string :");
		    	scanf("%s",s2);
		    	cmp=strcmp(s1,s2);
		    	if(cmp>0)
		    	  printf("1st string is greater");
		    	else
		    	  printf("2nd string is greater");
		    	break;
		    }	
		case 3:
		    {
		    	char s1[50],s2[50];
		    	int cmp;
		    	printf("enter 1st string :");
		    	scanf("%s",s1);
		    	printf("enter 2nd string :");
		    	scanf("%s",s2);
		    	cmp=strcmp(s1,s2);
		    	if(cmp==0)
		    	  printf("both strings are equal");
		    	else
		    	  printf("both strings are not equal");
		    	break;
			}   
		case 4:
		    {
		    	char s1[50];
		    	int i,cnt=0;
		    	printf("enter string :");
		    	scanf("%s",s1);
		    	for(i=0; s1[i]!=0; i++)
		    	  {
		    	  	if(s1[i]=='A'|| s1[i]=='a'||s1[i]=='E' 
					  ||s1[i]=='e'||s1[i]=='I'||s1[i]=='i' 
					  ||s1[i]=='O'||s1[i]=='o'||s1[i]=='U' 
					  ||s1[i]=='u')
					    {
					    	cnt++;
						}
				  }
				printf("count of vowels=%d",cnt);  
				break;
			} 
		case 5:
			{
				char s1[50],s2[50];
				printf("enter 1st string :");
				scanf("%s",s1);
				printf("enter 2nd string :");
				scanf("%s",s2);
				strcat(s1,s2);
				printf("concatenate two strings=%s",s1);
				break;
			}
		default:
			printf("invalid choice...");
	}
	
}
