#include<stdio.h>
#include<math.h>
int snt(int n)
{
	if(n==1||n==0)	return 0;
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)	return 0;
	}
	return 1;
}
int uoc(int n)
{
	int i,max=1;
	if(snt(n))	max=n;
	else
	{
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0&&i>max&&snt(i))	max=i;
		}
	}
	
	return max;
}
int main()
{
	int t;	scanf("%d",&t);
	while(t--)
	{
		int n;	scanf("%d",&n);
		printf("%d\n",uoc(n));
	}
}
