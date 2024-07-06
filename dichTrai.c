#include<stdio.h>
int main()
{
	int n,i,cnt=0;	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)	scanf("%d",&a[i]);
	int num;
	scanf("%d",&num);
	for(i=num;i<n;i++)	printf("%d ",a[i]);
	for(i=0;i<num;i++)	printf("%d ",a[i]);
}
