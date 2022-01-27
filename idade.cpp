#include <stdio.h>
#include <cstdlib>

int main(void) {
	int mae, filho1, filho2, filho3, maior;
	scanf("%d %d %d", &mae, &filho1, &filho2);
	filho3 = mae - filho1 - filho2;
	maior = (filho1 + filho2 + abs(filho1 - filho2)) / 2;
	printf("%d\n", (maior + filho3 + abs(maior - filho3)) / 2);
	return 0;
}