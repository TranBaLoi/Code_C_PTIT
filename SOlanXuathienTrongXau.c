#include<stdio.h>
#include<string.h>

int main()
{
	char xau[10000];
	gets(xau);
	char a[20][50];
	int n=0,i,j,k;
	for(k=0;k<strlen(xau);k++)
	{
		if(xau[k]>='A'&&xau[k]<='Z')
		{
			xau[k]+=32;
		}
	}
	char *token=strtok(xau," ");
	while(token!=NULL)
	{
		strcpy(a[n],token);
		++n;
		token=strtok(NULL," ");
	}
	int b[10000]={0};
	for(i=0;i<n;i++)
	{
		if(b[i]==0)
		{
			int dem=1;
			for(j=i+1;j<n;j++)
			{
				if(strcmp(a[i],a[j])==0)
				{
					++dem;
					b[j]=1;
				}
			}
			printf("%s %d\n",a[i],dem);
		}
	}
	
}
