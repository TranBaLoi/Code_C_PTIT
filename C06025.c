#include<stdio.h>
#include<math.h>
#include<string.h>
void reverse(int a[],int n)
{
	int l=0,r=n-1;
	while(l<r)
	{
		int dao=a[l];
		a[l]=a[r];
		a[r]=dao;
		++l;
		--r;
	}
}
void sub(char a[],char b[])
{
	int n1=strlen(a),n2=strlen(b),carry=0,n=0,i;
	int x[n1],y[n1],z[n1+1];
	for(i=0;i<n1;i++)	x[i]=a[i]-'0';
	for(i=0;i<n2;i++)	y[i]=b[i]-'0';
	reverse(x,n1);	reverse(y,n2);
	for(i=n2;i<n1;i++)	y[i]=0;
	for(i=0;i<n1;i++)
	{
		if((x[i]-y[i]-carry)<0)
		{
			z[n]=10+x[i]-y[i]-carry;
			carry=1;
			++n;
		}
		else 
		{
			z[n]=x[i]-y[i]-carry;
			carry=0;
			++n;
		}
	}
	int ok=0;
	for(i=n-1;i>=0;i--)
	{
		if(ok==0&&z[i]!=0)	ok=1;
		if(ok==1)	printf("%d",z[i]);
	}
	if(ok==0)	printf("0");
}
int main()
{
	int t;	scanf("%d",&t);
	while(t--)
	{
		char a[100000],b[100000];
		scanf("%s%s",a,b);
		if(strlen(a)>strlen(b) || (strlen(a)==strlen(b) && strcmp(a,b)>0) )	
		sub(a,b);
		else sub(b,a);
		printf("\n");
	}
}
