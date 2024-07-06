#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	char ten[10000],a[20][50];
	int i,l=0;
	gets(ten);
	for(i=0;i<strlen(ten);i++)
	{
		ten[i]=tolower(ten[i]);
	}
	char *token=strtok(ten," ");
	while(token!=NULL)
	{
		strcpy(a[l],token);
		++l;
		token=strtok(NULL," ");
	}
	for(i=0;i<l-1;i++)
	{
		printf("%c",a[i][0]);
	}
	printf("%s@ptit.edu.vn",a[l-1]);
}
