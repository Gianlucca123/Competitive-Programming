#include <bits/stdc++.h>

using namespace std;


int main(void) {
	int grenais = 0, gremio_victories = 0, inter_victories = 0, gremio_goals, inter_goals, draws = 0, continua;
	do{
		scanf("%d %d", &inter_goals, &gremio_goals);
		if (inter_goals > gremio_goals) inter_victories++;
		else if (inter_goals == gremio_goals) draws++;
		else gremio_victories++;
		grenais++;
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &continua);
	} while(continua != 2);
	printf("%d grenais\n", grenais);
	printf("Inter:%d\n", inter_victories);
	printf("Gremio:%d\n", gremio_victories);
	printf("Empates:%d\n", draws);
	printf("%s\n", inter_victories > gremio_victories? "Inter venceu mais\n": (inter_victories == gremio_victories? "Não houve vencedor\n": "Gremio venceu mais\n"));
	return 0;
}