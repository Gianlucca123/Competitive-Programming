#include <stdio.h>


double sequence(int n) {
	if(n == 100) return 1./100;
	return 1./n + sequence(n+1);
}

int main(void) {
	printf("%.2lf\n", sequence(1));
	return 0;
}