#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int check(char a[])
{
	int l=0,r=strlen(a)-1;
	while(l<r)
	{
		if(a[l]!=a[r])	return 0;
		++l;--r;
	}
	return 1;
}
int main()
{
	char xau[10005],a[10005][1005];
	int n=0,i,j,max=0;
	while(scanf("%s",xau)==1)
	{
		if(check(xau))
		{
			strcpy(a[n],xau);	++n;
		}
	}
	for(i=0;i<n;i++)
	{
		if(strlen(a[i])>max)	max=strlen(a[i]);
	}
	int cnt[100000];
	for(i=0;i<n;i++)	cnt[i]=1;
	for(i=0;i<n;i++)
	{
		if(strlen(a[i])==max && cnt[i]!=0){
		for(j=i+1;j<n;j++)
		{
			if(strcmp(a[i],a[j])==0)	
			{
				cnt[i]++;
				cnt[j]=0;
			}
		}
		}
	}
	for(i=0;i<n;i++)
	{
		if(strlen(a[i])==max &&cnt[i]!=0)
		{
			printf("%s %d\n",a[i],cnt[i]);
		}
	}
}
