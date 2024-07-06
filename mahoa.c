#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int t;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		char a[10000];
		gets(a);
		char cnt[100000]={0};
		int i;
		for(i=0;i<strlen(a);i++)
		{
			cnt[a[i]-'A']++;
		}
		for(i=0;i<strlen(a);i++)
		{
			if(cnt[a[i]-'A']!=0)
			{
				printf("%c%d",a[i],cnt[a[i]-'A']);
				cnt[a[i]-'A']=0;
			}
		}
		printf("\n");
	}
}
