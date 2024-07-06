#include<stdio.h>
#include<string.h>
int main()
{
	int t;	scanf("%d",&t);
	getchar();
	while(t--)
	{
		char a[10000];
		scanf("\n");
		gets(a);
		int i,ktra=0;
		for(i=6;i<12;i++)
		{
			int check=1;
			if(a[i]=='.')	check=0;
			if(check==1)
			{
				if(a[i]=='6'|| a[i]=='8')	ktra=1;
				else 
				{
					ktra=0;
					break;	
				}	
			}
		}
		if(ktra==1)	printf("YES");
		else if(a[6]<a[7] &&a[7]<a[8] &&a[8]<a[10] && a[10]<a[11])	printf("YES");
		else if(a[6]==a[7]&&a[7]==a[8]&&a[8]==a[10]&&a[10]==a[11])	printf("YES");
		else if(a[6]==a[7]&&a[7]==a[8]&&a[8]!=a[10]&&a[10]==a[11])	printf("YES");
		else printf("NO");
		printf("\n");
	}
}
