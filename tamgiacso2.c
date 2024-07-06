#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			for(j=1;j<=i*2;j++)
			{
				if(j%2==0)	printf("%d",j);
			}
		}
		if(i%2!=0)
		{
			for(j=1;j<=i*2;j++)
			{
				if(j%2!=0)	printf("%d",j);
			}
		}
		printf("\n");
	}
}
