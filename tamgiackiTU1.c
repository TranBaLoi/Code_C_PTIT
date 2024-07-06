#include<stdio.h>
int main()
{
	int n,i,j,k=1,l;	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2!=0)
			{
				printf("%c ",96+k);
				k++;
				l=k+i;
			}
			if(i%2==0)
			{
				printf("%c ",96+l);
				l--;
				k=l+i+1;
			}
			
		
		}
		printf("\n");
	}
}
