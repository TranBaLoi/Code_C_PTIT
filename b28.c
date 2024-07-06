#include<stdio.h>
#include<math.h>
int main()
{
	int i,j;
	int n;
	scanf("%d", &n);
	int m=n-1;
	for(i=1; i<=n+m; i++)
	{
		for(j=1; j<=n+m; j++)
		{
			if(j<=m)	printf("~");
			else
			{
				if(j==m+1 || i==1 ||i==n || j==m+n)	printf("*");
				else printf(".");
			}
		
		}
		m--;
		printf("\n");
	}
}
