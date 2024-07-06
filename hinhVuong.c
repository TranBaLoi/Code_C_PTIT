#include<stdio.h>
int main()
{
	int n,i,j;	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int l=n-1,k;
		for(j=1;j<2*n;j++)
		{
			if(i==1||j==1||j==2*n-1)	printf("%d",n);
			else if(j>=i&&j<=2*n-i)	printf("%d",n-i+1);
			else if(j>1&&j<i)
			{
				printf("%d",l);
				k=l;
				l--;	
			}
			else	
			{
				printf("%d",k);
				k++;	
			}	
		}
		printf("\n");
	}
	for(i=n+1;i<2*n;i++)
	{
		int l=n-1,k;
		for(j=1;j<2*n;j++)
		{
			if(i==2*n-1||j==1||j==n*2-1)	printf("%d",n);
			else if(j>=2*n-i&&j<=i)	printf("%d",i-n+1);
			else if(j>1&&j<2*n-i)
			{
				printf("%d",l);
				k=l;
				l--;
			}
			else 
			{
				printf("%d",k);
				k++;
			}
		}
		printf("\n");
	}
}
