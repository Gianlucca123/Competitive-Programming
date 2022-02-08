#include <stdio.h>

int main(void) {
	int i = 0;
	double a[112];
	while(scanf("%lf", &a[i]) != EOF) {
		if(a[i] <= 10) printf("A[%d] = %.1lf\n", i ,a[i]);
		i++;
	}
	return 0;
}