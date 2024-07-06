#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int check(char a[])
{
	int l=0,r=strlen(a)-1;
	while(l<r)
	{
		if(a[l]!=a[r])	return 0;
		l++;
		r--;
	}
	return 1;
}
int snt(int n)
{
	if(n==2||n==3||n==5||n==7)	return 1;
	else return 0;
}
int main()
{
	int t;	scanf("%d",&t);
	getchar();
	while(t--)
	{
		char a[10000];
		gets(a);
		int i,cnt=0;
		for(i=0;i<strlen(a);i++)
		{
			int x=a[i]-'0';
			if(snt(x)==0)	++cnt;	
		}	
		if(cnt==0 && check(a)==1)	printf("YES\n");
		else printf("NO\n");
	}
}
