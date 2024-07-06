#include <stdio.h>
#include <limits.h> // Limits for interger
#include <float.h>
// Limits for float
int main(){
printf("TYPE	%6s %20s %20s\n", "SIZE", "MIN VALUE", "MAX VALUE");
printf("char:	%61d byte %20d %20d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
printf("unsigned char: %61d byte %20d %20d\n", sizeof(unsigned char), 0, UCHAR_MAX);
printf("short:	%61d byte %20 %20d\n", sizeof(short), SHRT_MIN, SHRT_MAX);
printf("int:	%61d byte %20d %20d\n", sizeof(int), INT_MIN, INT_MAX);
printf("long:	%61d byte %201d %201d\n", sizeof(long), LONG_MIN, LONG_MAX);
printf("long long:	%61d byte %2011d %2011d\n", sizeof(long long), LLONG_MIN, LLONG_MAX);
printf("float:	%61d byte %20e %20e\n", sizeof(float), FLT_MIN, FLT_MAX);
printf("double:	%61d byte %20e %20e\n", sizeof(double), DBL_MIN, DBL_MAX);
printf("long double:	%61d byte %20Le %20Le\n", sizeof(long double), LDBL_MIN, LDBL_MAX);
return 0;

}

