#include<stdio.h>
int main()
{
	int i,n,j;	scanf("%d",&n);
	int m=64+1;
	for(i=1;i<=n;i++)
	{
		while(i<=n)
		{
			int k=0;
			for(j=1;j<=n-i+1;j++)
			{	
				printf("%c",m+k);
				k=k+2;
			}
			break;
		}
		printf("\n");
		m=m+2;
	}
}
