#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int check(char a[])
{
	int i;
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]=='1' ||a[i]=='3'||a[i]=='5'||a[i]=='7' ||a[i]=='9')	return 0;
	}
	int l=0 , r= strlen(a)-1;
	while(l<r)
	{
		if(a[l]!=a[r])	return 0;
		++l;--r;
	}
	return 1;
}
int main()
{
	int t;	scanf("%d",&t);
	getchar();
	while(t--)
	{
		char a[100000],i;
		gets(a);
		if(check(a))	printf("YES\n");
		else printf("NO\n");
	}
}
