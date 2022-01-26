#include <stdio.h>

int main(void) {
	int x, y;
	while(scanf("%d %d", &x, &y), x || y){
		printf("%s\n", x > 0 && y > 0? "primeiro": (x < 0 && y < 0? "terceiro": (x > 0? "quarto": "segundo")));
	}
	return 0;
}