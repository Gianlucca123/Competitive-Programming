#include <stdio.h>

int gdc(int a, int b) {
	if(b == 0) return a;
	return gdc(b, a % b);
}

int main(void) {
	int a= 192,b = 270;
	printf("Maior divisor comum = %d" , gdc(a,b));
}