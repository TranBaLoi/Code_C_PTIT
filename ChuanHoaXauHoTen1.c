#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int chuanhoa(char a[])
{
	int i;
	for(i=0;i<strlen(a);i++)
	{
		if(i==0)	a[i]=toupper(a[i]);
		else a[i]=tolower(a[i]);
	}
}
int main()
{
	int t;	scanf("%d",&t);
	getchar();
	while(t--)
	{
		char xau[10000];
		int i,n=0;
		char a[20][50];
		gets(xau);
		char *token=strtok(xau," ");
		while(token!=NULL)
		{
			strcpy(a[n],token);
			++n;
			token=strtok(NULL," ");
		}
		for(i=0;i<n;i++)
		{
			chuanhoa(a[i]);
			printf("%s ",a[i]);
		}
		printf("\n");
	}
}
