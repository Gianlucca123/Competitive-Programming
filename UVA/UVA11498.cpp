#include <stdio.h>

int main(void) {
	int k, x , y, a, b;
	while(scanf("%d %d %d", &k, &x, &y), k!=0){
		while(k--){
			scanf("%d %d", &a, &b);
			printf("%s\n", (a == x || b == y? "divisa": (a > x && b > y? "NE": (a < x && b < y? "SO": (a > x? "SE": "NO")))));
		}
	}
	return 0;
}