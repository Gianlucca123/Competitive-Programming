#include <bits/stdc++.h>

using namespace std;


int main(void)  {
	int x, y;
	scanf("%d %d", &x, &y);
	if (x > y) swap(x,y);
	x++;
	while(x) {
		if(x % 5 == 2 || x % 5 == 3) {
			printf("%d\n", x);
		}
		x = (x + 1) % y;
	}
	return 0;
}