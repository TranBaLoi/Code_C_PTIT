#include<stdio.h>
#include<math.h>
int snt(int n)
{
	int i;
	if(n==1||n==0)	return 0;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)	return 0;
	}
	return 1;
}
int main()
{
	int n,i,cnt=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(snt(a[i]))	++cnt;
	}
	printf("%d ",cnt);
	for(i=0;i<n;i++)
	{
		if(snt(a[i]))	printf("%d ",a[i]);
	}
	
	
}
