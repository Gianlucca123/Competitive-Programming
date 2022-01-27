#include <bits/stdc++.h>

using namespace std;


int sum(int x, int y) {
	if(y - x == 1) return (x % 13? x: 0) + (y % 13? y: 0);
	if (x == y) return (x % 13? x: 0);
	return (x % 13? x: 0) + (y % 13? y: 0) + sum(x+1, y-1);
}

int main(void) {
	int x, y;
	scanf("%d %d", &x, &y);
	if(x > y) swap(x,y);
	printf("%d\n", sum(x,y));
	return 0;
}