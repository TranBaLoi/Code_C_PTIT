#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
	char a[1000];
	gets(a);
	int n=0,i,j;
	char b[100][100];
	char *token=strtok(a," ");
	while(token != NULL)
	{
		strcpy(b[n],token);
		++n;
		token=strtok(NULL," ");	
	}
	for(i=0;i<n;i++)
	{
		int check=1;
		for(j=0;j<i;j++)
		{
			if(strcmp(b[i],b[j])==0)
			{
				check=0;
				break;
			}
		}
		if(check==1)	printf("%s ",b[i]);
	}
}
