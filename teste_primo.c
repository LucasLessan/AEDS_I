#include <stdlib.h>
#include <stdio.h>

int testePrimo(int numero) {
    int i;
    for(i = 2; i < numero; i++) {
        if(numero % i == 0)
            return 0;
    }
    return 1;
}

int main(int argc, char *argv[]) {
    int N;

    printf("Digite o numero: ");
    scanf("%d", &N);
    if(testePrimo(N))
        printf("Numero primo.\n\n");
    else
        printf("Numero nao primo.\n\n");

	system("pause");
	return 0;
}
