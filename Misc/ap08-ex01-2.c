#include <stdio.h>
#include <string.h>
#define MAX 5

struct produto {
	char descricao[40];
	float valor;
};

int main() {

	int i;
	struct produto prods[MAX]; // definindo um vetor de 5 posicoes para o struct produto

	for (i=0; i<MAX; i++) {
		puts("Nome do Produto?");
		gets(prods[i].descricao);
		puts("Valor do Produto?");
		scanf("%f", &prods[i].valor);
		getchar(); // Limpa o buffer de teclado
	}

	printf("\n\n");

	for (i=1; i<=MAX; i++) {
		if(prods[MAX - i].valor > 120.0)
			printf("Descricao: %s - Valor: R$ %.2f\n", prods[MAX - i].descricao, prods[MAX - i].valor);
	}

	return 0;
}
