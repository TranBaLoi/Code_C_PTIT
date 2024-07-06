#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,min;
	scanf("%d %d %d",&a, &b, &c);
	min=c;
	if(c>b)
	{
		min=b;
		if(b>a)	min=a;
		else min=b;
	}
	else
	{
		if(c>a)	min=a;
		else min=c;
	}
	printf("%d", min);
}
