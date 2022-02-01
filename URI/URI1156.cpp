#include <stdio.h>


double sequence(int a, int b) {
	if(a == 39) return (double)a/b;
	return (double)a/b + sequence(a+2, b * 2);
}

int main(void) {
	printf("%.2lf\n", sequence(1,1));
	return 0;
}