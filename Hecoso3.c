#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
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
			if(a[i]>='3')	++cnt;	
		}
		if(cnt==0)	printf("YES\n");
		else printf("NO\n");
	}
}
