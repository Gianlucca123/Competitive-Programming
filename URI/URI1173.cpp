#include <stdio.h>

int main(void) {
	int x[11] , i, number;
	scanf("%d", &number);
	x[0] = number;
	for(i = 0; i < 10; i++) {
		x[i] = number * 2;
		number = x[i];
	}
	for(i = 0; i < 10; i++) {
		printf("N[%d] = %d\n", i ,x[i]);
	}
	return 0;
}