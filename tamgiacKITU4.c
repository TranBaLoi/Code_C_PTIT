#include<stdio.h>
int main()
{
	int n,i,j;	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i==1)	printf("%c",63+i);
		else
		{
			int k=0;
			for(j=1;j<=i;j++)
			{
				printf("%c",64+k);
				k=k+2;
			}
			int l=2*(i-1);
			for(j=i+1;j<2*i;j++)
			{
				printf("%c",64+l-2);
				l=l-2;
			}
		}
		printf("\n");
	}
}
