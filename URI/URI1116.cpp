#include <stdio.h>

int main(void) {
	int x,y,n;
	scanf("%d", &n);
	while(n--){
		scanf ("%d %d", &x, &y);
		if (y == 0){
			printf("divisao impossivel\n");
			continue;
		}
		printf("%.1lf\n", (double)x/y);
	}
	return 0;
}