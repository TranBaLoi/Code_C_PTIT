#include<stdio.h>
#include<string.h>
int main()
{
	int t;	scanf("%d",&t);
	getchar();
	while(t--)
	{
		char xau[10000];
		int dem[1000]={0};
		gets(xau);
		int i,check=1;
		for(i=0;i<strlen(xau);i++)
		{
			if(xau[0]-'0'==0 || (!isdigit(xau[i])))
			{
				printf("INVALID\n");
				check=-1;
				break;
			}
			dem[xau[i]-'0']++;	
		}
		if(check!=-1)
		{
			for(i=0;i<=9;i++)
			{
				if(dem[i]==0)
				{
					check=0;
					break;
				}
			}
			if(check==1)	printf("YES\n");
			if(check==0)	printf("NO\n");
		}
	}
}
