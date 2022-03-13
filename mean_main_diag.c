#include <stdlib.h>
#include <stdio.h>

#define LIN 5
#define COL 5

int main(int argc, char *argv[]) {
	int i, j, matriz[LIN][COL], totalDiagonal = 0;

	for(i = 0; i < LIN; i++) {
        for(j = 0; j < COL; j++) {
            printf("Digite o valor da posicao [%d][%d] da matriz: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
	}

    printf("\n");

    if(LIN < COL) {
        for(i = 0; i < LIN; i++) {
            totalDiagonal += matriz[i][i];
        }
        printf("A media dos elementos da diagonal principal da matriz e: %.2f\n\n", (float) totalDiagonal / LIN);
    }
    else {
        for(i = 0; i < COL; i++) {
            totalDiagonal += matriz[i][i];
        }
        printf("A media dos elementos da diagonal principal da matriz e: %.2f\n\n", (float) totalDiagonal / COL);
    }

	system("pause");
	return 0;
}
