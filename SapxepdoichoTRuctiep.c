#include <stdio.h>

void swap(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}
int main(){
	int n,i,j, a[100];;
	scanf("%d", &n);
	for (i = 0; i < n; i++) scanf("%d", &a[i]);
	for (i = 0; i < n - 1; i++){
		for (j = i + 1; j < n; j++)
			if (a[i] > a[j]) swap(&a[i], &a[j]);
		printf("Buoc %d: ", i + 1);
		for (j = 0; j < n; j++) printf("%d ", a[j]);
		printf("\n");
	}
		
	return 0;
}
