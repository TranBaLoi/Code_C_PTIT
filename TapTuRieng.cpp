#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int n1,n2;
void Sort(char s[][50], int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(strcmp(s[i],s[j])>0)
			{
				char dao[50];
				strcpy(dao,s[j]);
				strcpy(s[j],s[i]);
				strcpy(s[i],dao);
			}
		}
	}
}
void check1(char s[], char s1[][50])
{
	int	n=0;
	char *token=strtok(s, " ");
	while(token!=NULL)
	{
		strcpy(s1[n++],token);
		token=strtok(NULL," ");
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(strcmp(s1[i],s1[j])==0)	strcpy(s1[j],"");
		}
	}
	n1=n;
}
void check2(char s[], char s1[][50])
{
	int	n=0;
	char *token=strtok(s, " ");
	while(token!=NULL)
	{
		strcpy(s1[n++],token);
		token=strtok(NULL," ");
	}
	n2=n;
}
int main()
{
	char s1[1000],s2[1000],a[1000][50],b[1000][50];
	gets(s1);
	scanf("\n");	gets(s2);
	check1(s1,a);
	check2(s2,b);
	Sort(a,n1);
	int temp[1000];
	for(int i=0;i<n1;i++)	temp[i]=1;
	for(int i=0;i<n2;i++)
	{
		for(int j=0;j<n1;j++)
		{
			if(strcmp(b[i],a[j])==0)	temp[j]=0;		
		}
	}	
	for(int i=0;i<n1;i++)
	{
		if(temp[i]!=0)	printf("%s ",a[i]);
	}
}

