#include<stdio.h>
#include<math.h>
int check(int n)
{
	int m=n,i,dao=0;
	while(m>0)
	{
		i=m%10;
		dao=dao*10+i;
		if(i==9)	return 0;
		m/=10;
	}
	if(dao==n)	return 1;
	else return 0;
}
int main()
{
	int n,i,cnt=0;	scanf("%d",&n);
	for(i=2;i<n;i++)
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
