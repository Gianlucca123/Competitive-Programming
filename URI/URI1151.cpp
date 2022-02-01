#include <stdio.h>



void fibonacci(int a, int b, int c) {
	if( a == 1) {
		printf("%d\n", b + c);
		return;
	}
	printf("%d ", b+c);
	return fibonacci(a-1, c, b+c);
}

int main(void) {
	int n;
	scanf("%d", &n);
	printf("%d ", 0);
	printf("%d ", 1);
	n -= 2;
	fibonacci(n, 0, 1);
	return 0;
}