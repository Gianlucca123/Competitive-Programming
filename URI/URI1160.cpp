#include <stdio.h>

int main(void) {
	int n, PA, PB, year;
	double G1, G2;
	scanf("%d", &n);
	while(n--) {
		scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);
		year = 0;
		while(PA <= PB) {
			PA +=  PA*(G1/100);
			PB +=  PB*(G2/100);
			year++;
			if(year > 100) break;
		}
		if(year > 100) printf("Mais de 1 seculo.\n");
		else printf("%d anos.\n", year);
	}
	return 0;
}