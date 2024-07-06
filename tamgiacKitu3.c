#include<stdio.h>
int main()
{
	int n,i,j;	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int k=n-1,m=64+i+k;
		for(j=1;j<=i;j++)
		{
			if(j==1)	printf("%c ",64+i);
			else 
			{
				printf("%c ",m);
				k--;
				m=m+k;
			}
		}
		printf("\n");
	}
}
