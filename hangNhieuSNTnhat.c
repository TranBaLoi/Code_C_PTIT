#include<stdio.h>
#include<math.h>
int check(int n)
{
	if(n==1)	return 0;
	int i;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)	return 0;
	}
	return 1;
}
int main()
{
	int n,i,j,k,c[100],max=0;	scanf("%d",&n);
	int a[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)	scanf("%d",&a[i][j]);
	}
	for(i=0;i<n;i++)
	{
		int cnt=0;
		for(j=0;j<n;j++)
		{
			if(check(a[i][j]))	++cnt;
		}
		c[i]=cnt;
	}
	for(i=0;i<n;i++)
	{
		if(c[i]>max)	max = c[i];
	}
	for(i=0;i<n;i++)
	{
		if(c[i]==max)	
		{
			printf("%d\n",i+1);
			k=i;
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		if(check(a[k][i]))	printf("%d ",a[k][i]);
	}
	
	
}
