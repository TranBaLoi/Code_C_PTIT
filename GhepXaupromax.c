#include<stdio.h>
#include<string.h>
int main()
{
	int t;	scanf("%d",&t);
	while(t--)
	{
		int n,i,j,m=0;	scanf("%d",&n);
		char s[n][1000],s1[100][1000];
		for(i=0;i<n;i++)	scanf("%s",s[i]);
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(strcmp(s[i],s[j])>0)
				{
					char dao[1000];
					strcpy(dao,s[j]);
					strcpy(s[j],s[i]);
					strcpy(s[i],dao);
				}
			}
		}
		strcpy(s1[0],strcat(s[0],s[1]));
		printf("%s" ,s1[m]);
		for(i=2;i<n;i++)
		{
			if(strcmp(strcat(s1[m],s[i]),strcat(s[i],s1[m]))>0)	
			{
				strcpy(s1[m+1],strcat(s[i],s1[m]));
				++m;}
			else if(strcmp(strcat(s1[m],s[i]),strcat(s[i],s1[m]))<0)
			{
				strcpy(s1[m+1],strcat(s1[m],s[i]));
				++m;}
		}
		for(i=0;i<=m;i++)	printf("%s ",s1[i]);
		printf("\n");
	}
}
