#include<stdio.h>
int check(int n,int a[100+2*n])
{
	int cnt[100000]={0},i;
	for(i=0;i<2*n-2;i++)
	{
		cnt[a[i]]++;
	}
	for(i=0;i<2*n-2;i++)
	{
		if(cnt[a[i]]==n-1)	return 1;
	}
	return 0;
}
int main()
{
	int n,i;	scanf("%d",&n);
	int a[2*n+100],cnt[100000]={0};
	for(i=0;i<2*n-2;i++)
	{
		scanf("%d",&a[i]);
		cnt[a[i]]++;
	}
	if(check(n,a)==1)	printf("Yes");
	else printf("No");
	
}
