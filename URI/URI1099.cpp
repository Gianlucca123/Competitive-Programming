#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int k, x, y, maior,menor, soma, i;
	scanf("%d", &k);
	while(k--) {
		soma = 0;
		scanf("%d %d", &x, &y);
		maior = max(x, y);
		menor = min(x,y);	
		for(i=menor+1; i<maior; i++) {
			if(i%2 != 0) soma+= i;
		}
		printf("%d\n", soma);
	}
	return 0;
}