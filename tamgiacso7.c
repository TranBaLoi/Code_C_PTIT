#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	
		int k=n-1,r=i;
		for(j=1;j<=i;j++)
		{
			
			if(j==1)	printf("%d ",i);
			else
			{
				r=r+k;
				printf("%d ",r);
				k=k-1;
			}
		}
		printf("\n");
	}
}
