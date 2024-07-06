#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
	char a='1',b='5';
	int nho=0;
	if(a+b+nho>=106)
	{
		printf("%c %d",a+b+nho-58,nho);
		nho=1;
	}
	else {
		printf("%c %d",a+b+nho-48,nho);
		nho=0;
	}
	//0=48;10=106
}
