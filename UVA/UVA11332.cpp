#include <stdio.h>


int summing(int a) {
	if (a / 10 == 0) return a;
	int sum = 0;
	while(a) {
		sum += a % 10;
		a /= 10;
	}
	return summing(sum);
	
}

int main(void) {
	int n;
	while(scanf("%d", &n), n) {
		printf("%d\n", summing(n));
	}
	return 0;
}