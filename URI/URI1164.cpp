#include <stdio.h>
#include <math.h>

int main(void) {
	int n, number, i, sum;
	scanf("%d", &n);
	while(n--) {
		scanf("%d", &number);
		sum = 0;
		for(i = 1; i <= sqrt(number); i++) {
			if(number%i == 0) {
				if(number/i == i) {
					sum+= i;
				}
				else{
					sum+= (i+number/i);
				}
			}
		}
		printf("%d%s\n", number ,sum-number == number? " eh perfeito": " nao eh perfeito");
	}
	return 0;
}