#include <stdio.h>

int main(void) {
	double nota1, nota2;
	int decisao;
	do {
		do {
			scanf("%lf", &nota1);
			if (nota1 < 0 || nota1 > 10) printf("nota invalida\n");
		} while(nota1 < 0 || nota1 > 10);
		do {
			scanf("%lf", &nota2);
			if (nota2 < 0 || nota2 > 10) printf("nota invalida\n");
		} while(nota2 < 0 || nota2 > 10);
		printf("media = %.2lf\n", (nota1 + nota2) / 2);
		do {
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &decisao);
		} while(decisao < 1 || decisao > 2);
	} while(decisao == 1);
	return 0;
}