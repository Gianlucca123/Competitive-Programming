#include <stdio.h>

int main(void) {
	int n, sum, i;
	while(scanf("%d", &n), n) {
		sum = 0;
		i = 5;
		while(i) {
			if(n % 2 == 0) {
				sum += n;
				i--;
			}
			n++;
		}
		printf("%d\n", sum);
	}
	return 0;
}