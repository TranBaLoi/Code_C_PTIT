#include<stdio.h>
#include<math.h>
double length(double a,double b,double c,double d)
{
	double l1=sqrt((c-a)*(c-a) + (d-b)*(d-b));
	return l1;
}
int main()
{
	int t;	scanf("%d",&t);
	while(t--)
	{
		double xA,xB,xC,yA,yB,yC;
		scanf("%lf%lf%lf%lf%lf%lf",&xA,&yA,&xB,&yB,&xC,&yC);
		double lAB=length(xA,yA,xB,yB),
				lAC=length(xA,yA,xC,yC),
				lBC=length(xB,yB,xC,yC);
		if((lAB+lAC)<=lBC || (lAB+lBC)<=lAC || (lAC+lBC)<=lAB)
		{
			printf("INVALID\n");
		}
		else
		{
			double p=(double)((lAB+lBC+lAC)/2);
			double S=(double)sqrt(p*(p-lAB)*(p-lBC)*(p-lAC));
			printf("%.2lf\n",S);
		}
	}
}
