#include<stdio.h>
#include<math.h>
int snt(int n)
{
	int i;
	if(n==1||n==0)	return 0;
	for(i=2;i<sqrt(n);i++)
	{
		if(n%i==0)	return 0;
	}
	return 1;
}
int main()
{
	int t,k;
	scanf("%d",&t);
	for(k=1;k<=t;k++)
	{
		int n,cnt[10000]={0},i,j;
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);	cnt[a[i]]++;
		}
		printf("Test %d:\n",k);
		for(i=0;i<n;i++)
		{
			for(j=i;j<n;j++)
			{
				int dao;
				if(a[i]>a[j])
				{
					dao=a[j];
					a[j]=a[i];
					a[i]=dao;	
				}	
			}
		}
		for(i=0;i<n;i++)	
		{
			if(cnt[a[i]]!=0&&snt(a[i]))
			{
				printf("%d xuat hien %d lan\n",a[i],cnt[a[i]]);
				cnt[a[i]]=0;
			}
		}
		printf("\n");
	}
		
	
}
