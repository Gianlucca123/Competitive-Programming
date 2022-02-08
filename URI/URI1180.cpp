#include <stdio.h>

#define MAX 1123456789

int main(void) {
	int n, x[1123], i = 0, posicao = 0, valor = MAX;
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		scanf("%d", &x[i]);
	}
	for(i = 0; i < n; i++) {
		if(x[i] < valor) { 
			valor = x[i]; 
			posicao = i;
		}
	}
	printf("Menor valor: %d\n", valor);
	printf("Posicao: %d\n", posicao);
	return 0;
}