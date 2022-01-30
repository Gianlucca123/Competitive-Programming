#include <stdio.h> 

void count(int a, int b, int c, int d) {
	if(d == b * 2) {
		if(c == 1) {
			printf("%d %d %d\n", a, a*a, a*a*a);
			return;
		}
		printf("%d %d %d\n", a, (a*a) + 1, (a*a*a) + 1);
		return;
	}
	if(c == 1) printf("%d %d %d\n", a, a*a, a*a*a);
	else printf("%d %d %d\n", a, (a*a) + 1, (a*a*a) + 1);
	if(c == 1) return count(a, b, c + 1, d+1);
	return count(a+1, b, 1, d+1);
}


int main(void) {
	int n;
	scanf("%d", &n);
	count(1, n, 1 , 1);
	return 0;
}