#include<stdio.h>
#include<math.h>
void fibo(int n)
{
	int i;
	int f0=0;
	int f1=1;
	int fn;
	printf("0 1 ");
	for(i=1;i<=n-2;i++)
	{
		fn=f0+f1;
		printf("%d ",fn);
		f0=f1;
		f1=fn;
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	fibo(n);
}
