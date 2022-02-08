#include <stdio.h>

int main(void) {
	int number, even[5], odd[5], i = 0, j = 0, k;
	while(scanf("%d", &number) != EOF) {
		if(i == 5) {
			for(k = 0; k < 5; k++) printf("par[%d] = %d\n", k, even[k]);
			i = 0;
		}
		if(j == 5) {
			for(k = 0; k < 5; k++) printf("impar[%d] = %d\n", k, odd[k]);
			j = 0;
		}
		if(number % 2 == 0) {
			even[i] = number;
			i++;
		}
		else {
			odd[j] = number;
			j++;
		}
	}
	for(k = 0; k < j; k++) printf("impar[%d] = %d\n", k, odd[k]);
	for(k = 0; k < i; k++) printf("par[%d] = %d\n", k, even[k]);
	
	return 0;
}