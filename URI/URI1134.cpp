#include<stdio.h>

int main(void) {
	int code, alcohol = 0, gasoline = 0, diesel = 0;
	while(scanf("%d", &code), code != 4) {
		if(code < 1 && code > 3) continue;
		switch(code) {
		case 1:
			alcohol++;
			break;
		case 2:
			gasoline++;
			break;
		case 3:
			diesel++;
			break;
		}
	}
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", alcohol);
	printf("Gasolina: %d\n", gasoline);
	printf("Diesel: %d\n", diesel);
	return 0;
}