#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char xau[1005],s[1005][1005];
	int n=0,i,j,max=0;
	while(scanf("%s",xau)==1)
	{
		strcpy(s[n],xau);
		++n;
	}
	int cnt[10000];
	for(i=0;i<n;i++)	cnt[i]=1;
	for(i=0;i<n;i++)
	{
		if(strlen(s[i])>max)	max=strlen(s[i]);	
	}	
	for(i=0;i<n;i++)
	{
		if(strlen(s[i])==max && cnt[i]!=0)
		{
			for(j=i+1;j<n;j++)
			{
				if(strcmp(s[i],s[j])==0)
				{
					cnt[i]++;
					cnt[j]=0;
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(strlen(s[i])==max && cnt[i]!=0)
		{
			printf("%s %d %d\n",s[i],max,cnt[i]);
		}
	}
	
}
