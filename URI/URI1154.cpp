#include <stdio.h>

int main(void) {
	int age, i = 0, sum = 0;
	while(scanf("%d", &age), age>0) {
		sum += age;
		i++;
	}
	printf("%.2lf\n" , (double)sum/i);
	return 0;
}