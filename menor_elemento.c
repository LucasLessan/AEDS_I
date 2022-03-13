#include <stdlib.h>
#include <stdio.h>

#define N 10

int main(int argc, char *argv[]) {
	int vetor[N], i, M, P;

	for(i = 0; i < N; i++) {
        printf("Digite o valor da posicao %d do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
	}

	M = vetor[0];
	P = 0;

	printf("\n");

	for(i = 0; i < N; i++) {
        if(vetor[i] < M) {
            M = vetor[i];
            P = i;
        }
	}

	printf("O menor elemento de N e %d e sua posicao dentro do vetor e %d.\n\n", M, P + 1);

	system("pause");
	return 0;
}
