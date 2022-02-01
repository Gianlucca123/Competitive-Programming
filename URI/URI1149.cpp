#include <stdio.h>

int main(void) {
	int a, n, sum = 0;
	scanf("%d", &a);
	while(scanf("%d", &n), n<=0) {
	
	}
	while(n--) {
		sum += a;
		a++;
	}
	printf("%d\n", sum);
	
	return 0;
}