#include <stdio.h> 

void count(int a, int b, int c) {
	if(a == b) {
		printf("%d %d %d PUM\n", c, c+1, c+2);
		return;
	}
	printf("%d %d %d PUM\n", c, c+1, c+2);
	return count(a+1, b, c + 4);
}


int main(void) {
	int n;
	scanf("%d", &n);
	count(1, n, 1);
	return 0;
}