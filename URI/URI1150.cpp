#include <stdio.h>

int main(void) {
	int x,z, sum = 0, i = 0, j;
	scanf("%d", &x);
	while(scanf("%d", &z), z <= x) {
		
	}
	for(j = x; sum < z; j++) { 
		sum += j; 
		i++;
	}
	printf("%d\n", i);
	return 0;
}