#include<stdio.h>
#include<math.h>
void shh(int a)
{
	int i,sum=1;
	for(i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)	sum=sum+i+a/i;
	}
	if(sum==a)	printf("%d ",a);
}
int main()
{
	int a,b,i;
	scanf("%d %d",&a,&b);
	if(a<b)
	{	
		int c;
		if(a==1)	c=a+1;
		else c=a;
		for(i=c;i<=b;i=i+2)
		{
			shh(i);
		}
	
	}
	else
	{
		int c;
		if(b==1)	c=b+1;
		else c=b;
		for(i=c;i<=a;i=i+2)
		{
			shh(i);
		}
	}
}
