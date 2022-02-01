#include<stdio.h>
#include <math.h>


int main(void) {
	int n, number, count, i;
	scanf("%d", &n);
	while(n--) {
		scanf("%d", &number);
		count = 0;
		for(i = 2; i <= sqrt(number); i++) {
			if(number % i == 0){
				count++;
				break;
			}
		}
		printf("%d%s\n", number, count!= 0 ? " nao eh primo": " eh primo");
	}
	return 0;
}