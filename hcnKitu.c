#include<stdio.h>
int main()
{
	int n,m,i,j;	scanf("%d%d",&n,&m);
	if(n>=m)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				if(i==1||j==1)	printf("%c",96+n);
				else
				{
					if(j<i)	printf("%c",96+n-j+1);
					else printf("%c",96+n-i+1);
				}
			}
			printf("\n");
		}
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				if(i==1||j==1)	printf("%c",96+m);
				else
				{
					if(j<i)	printf("%c",96+m-j+1);
					else printf("%c",96+m-i+1);
				}
			}
			printf("\n");
		}
	}
	
}
