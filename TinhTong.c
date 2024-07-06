#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	char xau[10000];
	gets(xau);
	int t=strlen(xau);
	while(t>1)
	{
		char a[1000],b[1000],sum[1000],dao;
		int i,n=0,m=0,nho=0,p=0;
		if(t%2!=0)
		{
			for(i=t/2;i<t;i++)
			{
				b[n]=xau[i];
				++n;
			}
			m=n;
			for(i=t/2;i>=0;i--)
			{
				a[m]=xau[i];
				--m;
			}
			m+=1;
			for(i=0;i<m;i++)	a[i]='0';
			for(i=n-1;i>=0;i--)
			{
				if(a[i]+b[i]+nho>=106)
				{
					sum[p]=a[i]+b[i]+nho-58;
					nho=1;
					++p;
				}
				else 
				{
					sum[p]=a[i]+b[i]+nho-48;
					nho=0;
					++p;
				}
			}
		}
		else 
		{
			for(i=0;i<t/2;i++)	a[i]=xau[i];
			for(i=t/2;i<t;i++)
			{
				b[n]=xau[i];
				++n;	
			}	
			for(i=n-1;i>=0;i--)	
			{
				if(a[i]+b[i]+nho>=106)
				{
					sum[p]=a[i]+b[i]+nho-58;
					nho=1;
					++p;
				}
				else 
				{
					sum[p]=a[i]+b[i]+nho-48;
					nho=0;
					++p;
				}
			}
		}
		int k=0;
		if(nho==1)	{
			xau[k]='1';
			++k;
		}
		for(i=p-1;i>=0;i--)
		{
			xau[k]=sum[i];
			++k;
		}
		t=k;
		if(xau[0]=='0')
		{
			t=k-1;
			for(i=0;i<k-1;i++)
			{
				xau[i]=xau[i+1];
				printf("%c",xau[i]);
			}
		}
		else 
		{
			for(i=0;i<k;i++)	printf("%c",xau[i]);
		}
		printf("\n");	
		
		
	}
}
