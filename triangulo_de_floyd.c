#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
	int N, diferenca, i, j;

	do {
        printf("Digite o numero de linhas do triangulo de Floyd: ");
        scanf("%d", &N);
        printf("\n");
        if(N <= 0)
            printf("Digite um numero valido!\n");
	} while(N <= 0);

	for(j = N - 1, i = 1; j >= 0; j--) {
        for(diferenca = N - j; diferenca > 0; diferenca--, i++) {
                printf("%d ", i);
        }
        printf("\n");
	}

	printf("\n");

	system("pause");
	return 0;
}
