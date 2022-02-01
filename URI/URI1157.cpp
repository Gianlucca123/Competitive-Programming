#include <stdio.h>


void divisor(int n, int m) {
	if(m == n) {
		printf("%d\n", n);
		return;
	}
	if(n % m == 0) printf("%d\n", m);
	return divisor(n, m+1);
}


int main(void) {
	int n;
	scanf("%d", &n);
	divisor(n, 1);
	return 0;
}