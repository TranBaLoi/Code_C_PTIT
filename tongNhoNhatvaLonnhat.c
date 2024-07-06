#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
long long atoll1(char a[])
{
	int i,res=0;
	for(i=0;i<strlen(a);i++)
	{
		res=res*10+a[i]-'0';
	}
	return res;
}
int main()
{
	int t;	scanf("%d",&t);
	while(t--)
	{
		char a[10000],b[10000],c[10000],d[10000];
		int i;
		scanf("%s",a);scanf("%s",b);
		for(i=0;i<strlen(a);i++)
		{
			c[i]=a[i];
			if(a[i]=='6')	a[i]='5';
		}
		for(i=0;i<strlen(b);i++)
		{
			d[i]=b[i];
			if(b[i]=='6')	b[i]='5';
		}
		printf("%lld ",atoll(a)+atoll(b));
		for(i=0;i<strlen(c);i++)
		{
			if(c[i]=='5')	c[i]='6';
		}for(i=0;i<strlen(d);i++)
		{
			if(d[i]=='5')	d[i]='6';
		}
		printf("%lld\n",atoll(c)+atoll(d));
	}
}
