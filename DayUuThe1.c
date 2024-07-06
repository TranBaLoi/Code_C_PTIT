#include<stdio.h>
#include<string.h>
int main()
{
	int t;	scanf("%d",&t);
	getchar();
	while(t--)
	{
		char s[100000],x[200][50];
		gets(s);
		int a[1000],i,n=0,chan=0,le=0;
		char *token=strtok(s," ");
		while(token!=NULL)
		{
			strcpy(x[n],token);
			++n;
			token=strtok(NULL," ");
		}
		for(i=0;i<n;i++)
		{
			a[i]=atoll(x[i]);
			if(a[i]%2==0)	++chan;
			else ++le;
		}
		if((n%2==0 && chan>le) || (n%2!=0 && chan<le) )	printf("YES");
		else printf("NO");
		printf("\n");
	}
}
