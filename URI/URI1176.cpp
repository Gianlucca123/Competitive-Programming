#include<stdio.h>


typedef long long ll;

int main(void) {
	int T, i, N;
	ll fibonacci[61];
	scanf("%d", &T);
	for(i = 0; i <=60; i++) {
		if(i < 2) fibonacci[i] = i;
		else fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
	}
	while(T--) {
		scanf("%d", &N);
		printf("Fib(%d) = %lld\n", N, fibonacci[N]);
	}
	return 0;
}