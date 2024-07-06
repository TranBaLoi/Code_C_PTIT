#include<stdio.h>
#include<math.h>
#include<string.h>
void reverse(int a[] , int n)
{
	int l=0,r=n-1;
	while(l<r)
	{
		int temp=a[l];
		a[l]=a[r];
		a[r]=temp;
		++l;
		--r;
	}
}
void add(char a[],char b[])
{
	int n1=strlen(a),n2=strlen(b),carry=0,n=0;
	int x[n1],y[n1],z[n1+1],i;
	for(i=0;i<n1;i++)	x[i]=a[i]-'0';
	for(i=0;i<n2;i++)	y[i]=b[i]-'0';
	reverse(x,n1);	reverse(y,n2);
	for(i=n2;i<n1;i++)	y[i]=0;
	for(i=0;i<n1;i++)
	{
		int temp=x[i]+y[i]+carry;
		z[n]=temp%10;
		carry=temp/10;
		++n;
	}
	if(carry>=1)	z[n++]=carry;
	for(i=n-1;i>=0;i--)	printf("%d",z[i]);
}
int main()
{
	int t;	scanf("%d",&t);
	while(t--)
	{
		char a[10000],b[10000];
		scanf("%s%s",a,b);
		if(strlen(a)>=strlen(b))	add(a,b);
		else add(b,a);
		printf("\n");
	}
}
