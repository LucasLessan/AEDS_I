#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int flag = 1, i, j, k, N;

void recebeMatriz(int *matriz[], int *lin, int *col, char *nome) {
    printf("Digite o nome da matriz: ");
    scanf("%s", nome);
    printf("Digite o numero de linhas da matriz %s: ", nome);
    scanf("%d", lin);
    printf("Digite o numero de colunas da matriz %s: ", nome);
    scanf("%d", col);

    matriz = malloc((int)lin * sizeof(int));

    if(matriz) {
        for(i = 0; i < *lin; i++) {
            matriz[i] = (int)malloc((int)col * sizeof(int));
            if(matriz[i]) {
                for(j = 0; j < *col; j++) {
                    printf("Digite o valor da posicao [%d][%d] da matriz %s", i + 1, j + 1, nome);
                    scanf("%d", &N);
                    matriz[i][j] = N;
                }
            }
            else {
                printf("Nao foi possivel alocar memoria solicitada!");
                flag = 0;
                return;
            }
        }
    }
    else {
        printf("Nao foi possivel alocar memoria solicitada!");
        flag = 0;
    }
}

//void multiplicaMatriz(int *matriz1, int linha1, int coluna1, int *matriz2, int linha2, int *matrizResultante) {
//}

void imprimeMatriz(int *matriz, int lin, int col, char *nome) {
    printf("%s", nome);
    for(i = 0; i < col; i++)
        printf("\t[%d]", i + 1);
    printf("\n");
    for(i = 1; i <= lin; i++) {
        for(j = 0; j < strlen(nome) - strlen((char *)&i) - 2; j++) {
            printf(" ");
        }
        printf("[%d]", i);
        for(j = 0; j < col; j++) {
            printf("\t%d", matriz[(i - 1), j]);
        }
    }
}

int main(int argc, char *argv[]) {
	char *nomeMatriz1, *nomeMatriz2;
	int *matriz1, *linha1, *coluna1, *matriz2, *linha2, *coluna2, *matrizResultante;

    recebeMatriz(matriz1, linha1, coluna1, nomeMatriz1);
    if(flag)
        imprimeMatriz(matriz1, *linha1, *coluna1, nomeMatriz1);
//    if(flag) {
//        recebeMatriz(matriz2, "B");
//
//        multiplicaMatriz(matriz1, linha1, coluna1, matriz2, linha2, matrizResultante);
//
//        imprimeMatriz(matrizResultante, linha1, coluna2);
//    }
//
//	vetor = (int *) malloc(N * sizeof(int));
//
//	printf("\n");
//
//	if(N) {
//        for(i = 0; i < N; i++) {
//            printf("Digite a idade do aluno %d: ", i + 1);
//            scanf("%d", &vetor[i]);
//            totalIdades += vetor[i];
//        }
//        printf("\nMedia das idades dos alunos: %.2f\n\n", (float) totalIdades / N);
//	}
//	else
//        printf("N�o foi possivel alocar memoria solicitada!\n\n");

	system("pause");
	return 0;
}
