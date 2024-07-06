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
		char xau[1000000],i;
		gets(xau);
		int dem=1;
		for(i=0;i<strlen(xau)-1;i++)
		{
			if(xau[i]==' ' && xau[i+1]!=' ')	++dem;
		}
		printf("%d\n",dem);
	}
}
