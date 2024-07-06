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
int main()
{
	int t;	scanf("%d",&t);
	getchar();
	while(t--)
	{
		char a[100000];
		gets(a);
		int i,cnt=0;
		for(i=0;i<strlen(a);i++)
		{
			cnt +=(a[i]-'0');
		}
		if(a[0]=='8' && check(a)==1 && cnt%10==0)	printf("YES\n");
		else printf("NO\n");
	}
}
