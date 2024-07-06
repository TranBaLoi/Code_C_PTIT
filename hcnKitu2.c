#include<stdio.h>
int main()
{
	int n,m,i,j,k=64;	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
	{
		int u=63+i;
		int l=64+m;
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
				u--;
			}
		}
		if(m<i)	
		{
			while(l>=65)
			{
				printf("%c",l);
				l--;
			}
		}
		printf("\n");
		
	}
}
