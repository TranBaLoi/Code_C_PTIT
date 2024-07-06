#include<stdio.h>
#include<math.h>
int main()
{
	int i,j;
	int n,m;
	int t=0;
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			if(j<=i	)
			{
			  if(i==1 || i==n || j==1 ||j==i)	printf("*");
			  else printf(".");
			}
			else printf(" ");
		}
		printf("\n");
	}
	
}
