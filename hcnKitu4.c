#include<stdio.h>
int main()
{
	int n,m,i,j;	scanf("%d%d",&n,&m);
	if(n==m)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++)	printf("%c",'A'+n-i+j-1);
			for(j=i+1;j<=n;j++)	printf("%c",'A'+n-1);
			printf("\n");
		}
	}
	else if(n<m)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m-n+i-1;j++)	printf("%c",'A'+n-i+j-1);
			for(j=m-n+i;j<=m;j++)	printf("%c",'A'+m-1);
			printf("\n");
		}
		
	}
	else 
	{
		int l=1;
		for(i=1;i<=n-m+1;i++)	
		{
			for(j=1;j<=m;j++)	printf("%c",'A'+m-1);
			printf("\n");
		}
		for(i=n-m+2;i<=n;i++)
		{
		
			for(j=1;j<=l;j++)	printf("%c",'A'+n-i-1+j);
			for(j=l+1;j<=m;j++)	printf("%c",'A'+m-1);	
			printf("\n");
			l++;
		}
		
	}

}
