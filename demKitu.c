#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char xau[10000],i;
	int chucai=0,chuso=0,kitu=0;
	gets(xau);
	for(i=0;i<strlen(xau);i++)
	{
		if((xau[i]>='a' &&xau[i]<='z') || (xau[i]>='A' && xau[i]<='Z'))	++chucai;
		else if(xau[i]>='0' && xau[i]<='9')	++chuso;
		else ++kitu;
	}
	printf("%d %d %d",chucai,chuso,kitu);
	return 0;
}
