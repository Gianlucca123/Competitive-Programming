#include <stdio.h>

int main(void) {
	int x, index;
	while(scanf("%d", &x), x != 0) {
		index = 1;
		while(index) {
			printf("%d%s", index, (x == 1? "\n": " "));
			index = (index + 1) % x;
		}
		if(x != 1)	printf("%d\n", x);
	}
	return 0;
}