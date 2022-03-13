#include <stdlib.h>
#include <stdio.h>

#define N 3

void vetorMatriz(double v[], double A[][N]) {
    int i, j;

    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            A[i][j] = v[i * 3 + j];
        }
    }
}

int main(int argc, char* argv[]) {
	int i, j;
	double vetor[N * N], matriz[N][N];

    for(i = 0; i < N * N; i++) {
        printf("Informe o valor da posicao %d do vetor: ", i + 1);
        scanf("%lf", &vetor[i]);
    }

    vetorMatriz(vetor, matriz);

    printf("\n");

    for(i = 0; i < N; i++)
        for(j = 0; j < N; j++)
            printf("O valor da posicao %d, %d da matriz e: %lf\n", i + 1, j + 1, matriz[i][j]);

    printf("\n");

	system("pause");
	return 0;
}
