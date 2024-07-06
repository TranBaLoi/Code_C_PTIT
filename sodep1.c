#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int ktra(char a[20])
{
	int i;
	if((a[0]=='1' && a[strlen(a)-1]=='2') || (a[0]=='2' && a[strlen(a)-1]=='4') ||(a[0]=='3'&&a[strlen(a)-1]=='6') 
	|| (a[0]=='4'&&a[strlen(a)-1]=='8')|| (a[0]=='8' && a[strlen(a)-1]=='4') || (a[0]=='6' && a[strlen(a)-1]=='3') 
	||(a[0]=='4'&&a[strlen(a)-1]=='2') 
	|| (a[0]=='2'&&a[strlen(a)-1]=='1') )
	return 1;
	else return 0;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char a[20];
	scanf("%s",a);
	int sum=0;
	int m=strlen(a),i;
	if(ktra(a)==1)
	{
		for(i=1;i<m/2;i++)
		{
			if(a[i]==a[strlen(a)-1-i]) ++sum;
		}
		if(sum==m/2-1)	printf("YES\n");
		else printf("NO\n");
	}
	else printf("NO\n");
	}
	
}
