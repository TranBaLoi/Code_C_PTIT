#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int ktra(char a[20])
{
	int i;
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7')	return 0;
	}
	return 1;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char a[20];
	scanf("%s",a);
	int i;
	int cnt=0,check=0;
	if(ktra(a)==1)
	{
	
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]=='1')
		{
			check=1;
			++cnt;
			printf("1");
		}
		if(a[i]=='0'||a[i]=='8'||a[i]=='9')
		{
			if(cnt>0)
			{
				check=1;
				printf("0");
			}
		}
	

	}
	if(check==0)	printf("INVALID");
	
	}
	
	if(ktra(a)==0) 	printf("INVALID");
	printf("\n");
	}
}
