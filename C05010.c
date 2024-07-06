#include<stdio.h>
#include<math.h>
int check(int n)
{
	int i;
	if(n==1||n==0)	return 0;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)	return 0;
	}
	return 1;
}
int main()
{
	int n,i,j;	scanf("%d",&n);
	int a[n][n],sum=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)	scanf("%d",&a[i][j]);	
	}	
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(check(a[i][j]))	sum+=a[i][j];
		}
	}
	printf("%d",sum);
}
