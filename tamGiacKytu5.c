#include<stdio.h>
int main()
{
	int i,n,j;	scanf("%d",&n);
	int m=62+n+1;
	for(i=1;i<=n;i++)
	{
		while(i<=n)
		{
			int k=1;
			for(j=1;j<=n-i+1;j++)
			{	
				printf("%c",m-1+k);
				k++;
			}
			break;
		}
		printf("\n");
		m=m-1;
	}
}
