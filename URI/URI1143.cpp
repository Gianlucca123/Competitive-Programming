#include <stdio.h> 

void count(int a, int b) {
	if(a == b) {
		printf("%d %d %d\n", a, a * a, a * a * a);
		return;
	}
	printf("%d %d %d\n", a, a * a, a * a * a);
	return count(a+1, b);
}


int main(void) {
	int n;
	scanf("%d", &n);
	count(1, n);
	return 0;
}