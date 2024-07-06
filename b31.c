#include<stdio.h>
#include<math.h>
int main()
{
	long n;
	scanf("%ld", &n);
	int t=n/10;
	int f=t;
	int m=1;
	while(f>=10)
	{
		f=f/10;
		m=m*10;
	}
	t=t%m*10+f;
	
	printf("%d", t+n%10*m*10);
}
