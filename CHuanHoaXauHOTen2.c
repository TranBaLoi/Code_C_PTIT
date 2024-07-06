#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int check1(char a[])
{
	int i;
	for(i=0;i<strlen(a);i++)
	{
		if(i==0)	a[i]=toupper(a[i]);
		else a[i]=tolower(a[i]);
	}
}
void check2(char a[])
{
	int i;
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]>='a'&&a[i]<='z')	a[i]=toupper(a[i]);
		printf("%c",a[i]);
	}
}
int main()
{
	int t;	scanf("%d",&t);
	getchar();
	while(t--)
	{
		char xau[10000],a[20][50];
		gets(xau);
		int n=0,i;
		char *token=strtok(xau," ");
		while(token!=NULL)
		{
			strcpy(a[n],token);
			++n;
			token=strtok(NULL," ");
		}
		for(i=1;i<n;i++)
		{
			check1(a[i]);
			if(i!=n-1)	printf("%s ",a[i]);
			else 	printf("%s, ",a[i]);
		}
		check2(a[0]);
		printf("\n");
	}
}
