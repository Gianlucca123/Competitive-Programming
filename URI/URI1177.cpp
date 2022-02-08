#include<stdio.h>

int main(void) {
	int t, n[1123], i, j = 0;
	scanf("%d", &t);
	for(i= 0; i <1000; i++) {
		if(j == t) j = 0;
		n[i] = j;
		j++;
	}
	for(i= 0; i <1000; i++) {
		printf("N[%d] = %d\n", i , n[i]);
	}
	return 0;
}