#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,m,n;
	scanf("%d", &n);
	for(i=2;i<n;i++)
	{
		int sum=0;
		for(j=1;j<=i/2;j++)
		{
			if(i%j==0) sum=sum+j;
		}	
		if(sum==i)	printf("%d ",i);
	}
}
