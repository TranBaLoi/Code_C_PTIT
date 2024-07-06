#include<stdio.h>
#include<string.h>
int check(char a[])
{
	int i;
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]<'0' || a[i]>'9')	return 0;
	}
	return 1;
}
int main()
{
	int t;	scanf("%d",&t);
	getchar();
	while(t--)
	{
		char a[10000];
		scanf("\n");
		gets(a);
		int i,chan=0,le=0;
		if(check(a)==0)	printf("INVALID");
		else
		{
			for(i=0;i<strlen(a);i++)
			{
				int n=a[i]-'0';
				if(n%2==0)	++chan;
				else ++le;
			}
			if((chan>le && strlen(a)%2==0) || 
			(le<chan && strlen(a)%2!=0))
			printf("YES");
			else printf("NO");
		}
		printf("\n");
	}
}
