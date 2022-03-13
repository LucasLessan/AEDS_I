#include <stdlib.h>
#include <stdio.h>

#define MAX 100

int main(int argc, char* argv[]) {
	int N, i, vetorInt[MAX];

	printf("Digite o numero de posicoes do vetor: ");
	scanf("%d", &N);

    printf("\n");

	for(i = 0; i < N; i++) {
        printf("Digite o valor da posicao %d: ", i + 1);
        scanf("%d", &vetorInt[i]);
	}

    printf("\n");
    i--;

	for(; i >= 0; i--) {
        printf("O valor da posicao %d e: %d\n", i + 1, vetorInt[i]);
	}

    printf("\n");

	system("pause");
	return 0;
}
