#include <stdio.h>

int main(void) {
	int i, a[21];
	for(i = 19; i >= 0; i--) {
		scanf("%d", &a[i]);
	}
	for(i = 0; i < 20; i++) {
		printf("N[%d] = %d\n", i , a[i]);
	}
	return 0;
}