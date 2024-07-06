#include<stdio.h>
int main()
{
	int n,m,i,j,k=63;	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
	{
		int u=63+m;
		int l;
		if(m>=i)
		{
			for(j=1;j<=m-i+1;j++)
			{
				printf("%c",k+j);
			}
			k++;
		}
		if(m>=i)
		{
			for(j=m-i+2;j<=m;j++)
			{
				printf("%c",u);
			}
		}
		if(m<i)	
		{
			for(l=1;l<=m;l++)	printf("%c",u);
		}
		printf("\n");
		
	}
}
