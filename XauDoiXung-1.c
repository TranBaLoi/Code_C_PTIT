#include<stdio.h>
#include<string.h>
int check(char a[])
{
	int l=0,r=strlen(a)-1,cnt=0;
	while(l<r)
	{
		if(a[l]!=a[r])	++cnt;
		++l;--r;
	}
	if(cnt>1)	return 0;
	else if(cnt==0 && strlen(a)%2==0)	return 0;
	else return 1;
}
int main()
{
	int t;	scanf("%d",&t);
	while(t--)
	{
		char a[1000];
		scanf("%s",a);
		if(check(a))	printf("YES\n");
		else printf("NO\n");
	}
}
