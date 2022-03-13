#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
	int i;
	float vetorFloat[7];

	for(i = 0; i < 7; i++) {
        printf("Digite o real No. %d: ", i + 1);
        scanf("%f", &vetorFloat[i]);
	}

    printf("\n");

	for(i = 0; i < 7; i++) {
        printf("O real No. %d e: %f\n", i + 1, vetorFloat[i]);
	}

    printf("\n");

    for(i = 1; i < 7; i += 2) {
        printf("O real No. %d e: %f\n", i + 1, vetorFloat[i]);
    }

    printf("\n");

	system("pause");
	return 0;
}
