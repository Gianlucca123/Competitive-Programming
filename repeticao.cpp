#include <bits/stdc++.h>

#define M 1000001

using namespace std;

int main(void) {
	char string[M];
	int count_final = 0, count, k=0;
	scanf("%s", string);
	for(int i = 0;  ; i++) {
		count = 0;
		for(int j = i; j != '\0' ; j++) {
			if(string[i] == string[j]) {
				count++;
			}
			else {
				count_final = max(count_final, count);
				k = j;
				break;
			}
		}
		if (k == '\0') break;
	}
	printf("%d\n", count_final);
	
	return 0;
}