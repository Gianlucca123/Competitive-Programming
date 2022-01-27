#include <stdio.h>

int main(void) {
	int index = 1, n = 5;
	while(index) {
		printf("index = %d\n", index);
		index = (index + 1) % n;
	}
	return 0;
}