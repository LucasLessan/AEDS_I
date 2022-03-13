#include <stdlib.h>
#include <stdio.h>

void calculaPG(float tinicial, float razao, int ntermos) {
	if(ntermos == 0)
		return;
	printf("%.2f\n", tinicial);
	calculaPG(tinicial * razao, razao, ntermos - 1);
}

int main(int argc, char *argv[]) {
	int ntermos;
	float tinicial, razao;

	printf("Digite o termo inicial da PG: ");
	scanf("%f", &tinicial);
	printf("Digite razao da PG: ");
	scanf("%f", &razao);
	printf("Digite o numero de termos da PG: ");
	scanf("%d", &ntermos);

	printf("\n");

	calculaPG(tinicial, razao, ntermos);

	printf("\n");

	system("pause");
	return 0;
}
