#include<stdio.h>
#include<string.h>
int check(char s[])
{
	int list[strlen(s)];
	int i,j;
	for(i=0;i<strlen(s);i++)
	{
		list[i]=1;
		for(j=0;j<i;j++)
		{
			if(s[i]>s[j] && list[i]<list[j]+1)	list[i]=list[j]+1;
		}
	}
	int max=0;
	for(i=0;i<strlen(s);i++)
	{
		if(list[i]>max)	max=list[i];
	}
	return 26-max;
}
int main()
{
	char s[100];
	gets(s);
	printf("%d",check(s));
}
