#include<stdio.h>
#include<math.h>
void ss(int a, int b)
{
	int sum=0,cnt=0;
	int c=a,d=b;
	while(c>0)
	{
		int m=c%10;
		sum=sum+m;
		c=c/10;
	}
	while(d>0)
	{
		int n=d%10;
		cnt=cnt+n;
		d=d/10;
		
	}
	if(sum==cnt)	printf("%d %d", a, b);
	if(sum>cnt)	printf("%d %d",b,a );
	if(sum<cnt)	printf("%d %d",a,b);
}
int main()
{
	int a,b;
	scanf("%d %d", &a,&b);
	ss(a,b);
}
