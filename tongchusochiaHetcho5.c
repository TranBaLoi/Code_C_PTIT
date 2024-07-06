#include<stdio.h>
#include<math.h>
int check(int n)
{
	int i,j,sum=0;
	for(j=2;j<=sqrt(n);j++)
	{
		if(n%j==0)	return 0;
	}
	while(n>0)
	{
		sum+=n%10;
		n/=10;
	}
	if(sum%5==0)	return 1;
	else return 0;
}
int main()
{
	int i,n,cnt=0;	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(check(i))
		{
			printf("%d ",i);
			++cnt;
		}
	}
	printf("\n");
	printf("%d",cnt);
}
