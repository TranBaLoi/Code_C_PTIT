#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a[10000];
	gets(a);
	int i,l=0,r=strlen(a)-1,cnt=0;
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]=='(')	a[i]=')';
		if(a[i]=='{')	a[i]='}';
		if(a[i]=='[')	a[i]=']';
	}
	if(strlen(a)%2!=0)	printf("0");
	else 
	{
		while(l<r)
		{
			if(a[l]!=a[r])	++cnt;
			l++;
			r--;
		}
		if(cnt==0)	printf("1");
		else printf("0");
	}
	
}
