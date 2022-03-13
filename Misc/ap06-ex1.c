#include <stdlib.h>
#include <stdio.h>

#define MAX_Linhas 12
#define MAX_Colunas 12

int main(int argc, char* argv[]) {
	int i, j, LIN, COL, A[MAX_Linhas][MAX_Colunas], B[MAX_Linhas][MAX_Colunas], C[MAX_Linhas][MAX_Colunas];

    printf("Digite o numero de linhas das matrizes: ");
    scanf("%d", &LIN);
    printf("Digite o numero de colunas das matrizes: ");
    scanf("%d", &COL);

    printf("\n");

	for(i = 0; i < LIN; i++) {
        for(j = 0; j < COL; j++) {
            printf("Digite o valor da posicao %d, %d da matriz A: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
	}

    printf("\n");

	for(i = 0; i < LIN; i++) {
        for(j = 0; j < COL; j++) {
            printf("Digite o valor da posicao %d, %d da matriz B: ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
	}

    printf("\n");

	for(i = 0; i < LIN; i++)
        for(j = 0; j < COL; j++)
            C[i][j] = A[i][j] + B[i][j];

	for(i = 0; i < LIN; i++)
        for(j = 0; j < COL; j++)
            printf("C(%d, %d): %d\n", i + 1, j + 1, C[i][j]);

	system("pause");
	return 0;
}
