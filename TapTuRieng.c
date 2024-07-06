#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int n,m;
int check1(char xau[],char a[][50])
{
	char *token=strtok(xau," ");
	int i=0;
	while(token!=NULL)
	{
		strcpy(a[i],token);
		++i;
		token=strtok(NULL," ");
	}
	n=i;
}
int check2(char xau[],char a[][50])
{
	char *token=strtok(xau," ");
	int i=0;
	while(token!=NULL)
	{
		strcpy(a[i],token);
		++i;
		token=strtok(NULL," ");
	}
	m=i;
}
int main()
{
	char dao1[20][50];
	char xau1[10000],xau2[10000],a[20][50],b[20][50],dao[20][50];
	gets(xau1);
	scanf("\n");
	gets(xau2);
	check1(xau1,a);
	check2(xau2,b);
	int i,j,l=0;
	int c[10000]={0},k;
	for(i=0;i<n;i++)
	{
		int kiemtra=1;
		if(c[i]==0)
		{
			for(k=i+1;k<n;k++)
			{
				if(strcmp(a[i],a[k])==0)	c[k]=1;
			}
			for(j=0;j<m;j++)
			{
				if(strcmp(a[i],b[j])==0)
				{
					kiemtra=0;
					break;
				}
			}
			if(kiemtra==1)	
			{
				strcpy(dao[l],a[i]);
				++l;
			}
		}
	}
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(strcmp(dao[i],dao[j])==1)
			{
				strcpy(dao1[0],dao[j]);
				strcpy(dao[j],dao[i]);
				strcpy(dao[i],dao1[0]);
			}
		}
	}
	for(i=0;i<l;i++)	printf("%s ",dao[i]);
	
}

