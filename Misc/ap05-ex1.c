#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
	int i, vetorInt[10];

	for(i = 0; i < 10; i++) {
        printf("Digite o inteiro No. %d: ", i + 1);
        scanf("%d", &vetorInt[i]);
	}

    printf("\n");

	for(i = 0; i < 10; i++) {
        printf("O inteiro No. %d e: %d\n", i + 1, vetorInt[i]);
	}

    printf("\n");

	system("pause");
	return 0;
}
