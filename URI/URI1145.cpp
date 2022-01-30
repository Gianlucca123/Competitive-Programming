#include <stdio.h> 

void count(int a, int b, int c) {
	int x = a;
	if(c == b - (a -1) ) {
		while(x--) {
			printf("%d%s", c, (c % a == 0 ? "\n": " "));
			c++;
		}
		return;
	}
	while(x--) {
		printf("%d%s", c, (c % a == 0 ? "\n": " "));
		c++;
	}
	return count(a, b, c);
}


int main(void) {
	int x, y;
	scanf("%d %d", &x, &y);
	count(x, y , 1);
	return 0;
}