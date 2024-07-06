#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int t,k=1;	scanf("%d",&t);
	getchar();
	while(k<=t)
	{
		char xau1[10000],xau2[10000],xau3[10000],a[20][50],b[20][50];
		int n=0,m=0,i;
		scanf("\n");
		gets(xau1);
		gets(xau2);
		strcpy(xau3,xau1);
		char *token=strtok(xau1," ");
		while(token!=NULL)
		{
			strcpy(a[n],token);
			++n;
			token=strtok(NULL," ");
		}
		for(i=0;i<strlen(xau3);i++)
		{
			xau3[i]=tolower(xau3[i]);
		}
		char *token1=strtok(xau3," ");
		while(token1!=NULL)
		{
			strcpy(b[m],token1);
			++m;
			token1=strtok(NULL," ");
		}
		for(i=0;i<strlen(xau2);i++)	xau2[i]=tolower(xau2[i]);
		printf("Test %d: ",k);
		for(i=0;i<n;i++)
		{
			if(strcmp(b[i],xau2)!=0)	printf("%s ",a[i]);
		}
		++k;
		printf("\n");
	}
}
