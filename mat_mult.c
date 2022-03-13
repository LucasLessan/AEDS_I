#include <stdlib.h>
#include <stdio.h>

#define MAXColunas 3
#define MAXLinhas 3

void recebeMatriz(float matriz[][MAXColunas], char *nome, int *linhas, int *colunas) {
    int i, j;
    float n;

    printf("Digite o numero de linhas da matriz \"%s\": ", nome);
    scanf("%d", *&linhas);
    printf("Digite o numero de colunas da matriz \"%s\": ", nome);
    scanf("%d", *&colunas);

    printf("\n");

    for(i = 0; i < *linhas; i++) {
        for(j = 0; j < *colunas; j++) {
            printf("Digite o valor da posicao [%d][%d] da matriz \"%s\": ", i + 1, j + 1, nome);
            scanf("%f", &n);
            matriz[i][j] = n;
        }
    }

    printf("\n");
}

void multiplicaMatriz(float matrizA[][MAXColunas], char *nomeA, int linhasA, int colunasA, float matrizB[][MAXColunas], char *nomeB, int linhasB, int colunasB, float matrizC[][MAXColunas], int *flag) {
    int i, j, k;

    if(colunasA != linhasB) {
        printf("O numero de colunas de \"%s\" deve ser igual ao numero de linhas de \"%s\"!\n\n", nomeA, nomeB);
        *flag = 0;
        return;
    }

    for(i = 0; i < linhasA; i++)
        for(j = 0; j < colunasB; j++)
            matrizC[i][j] = 0;

    for(i = 0; i < linhasA; i++)
        for(j = 0; j < colunasB; j++)
            for(k = 0; k < colunasA; k++)
                matrizC[i][j] += matrizA[i][k] * matrizB[k][j];

    *flag = 1;
}

void imprimeMatriz(float matriz[][MAXColunas], char *nome, int linhas, int colunas) {
    int i, j;

    for(i = 0; i < linhas; i++)
        for(j = 0; j < colunas; j++)
            printf("%s[%d][%d]: %f\n", nome, i + 1, j + 1, matriz[i][j]);

    printf("\n");
}

int main(int argc, char *argv[]) {
	int linhasA, colunasA, linhasB, colunasB, flag;
	float a[MAXLinhas][MAXColunas], b[MAXLinhas][MAXColunas], c[MAXLinhas][MAXColunas];

	recebeMatriz(a, "A", &linhasA, &colunasA);
	recebeMatriz(b, "B", &linhasB, &colunasB);

	multiplicaMatriz(a, "A", linhasA, colunasA, b, "B", linhasB, colunasB, c, &flag);

	if(flag)
	imprimeMatriz(c, "C", linhasA, colunasB);

	system("pause");
	return 0;
}
