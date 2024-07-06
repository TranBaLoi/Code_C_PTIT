#include<stdio.h>
int main()
{
	int n,m,i=0,j,a[100000];
	int cnt=0;	scanf("%d",&n);
	if(n==0)	printf("0");
	while(n>0)
	{
		m=n%2;
		a[i]=m;
		i++;
		n=n/2;
		++cnt;
	}
	for(i=cnt-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
}
