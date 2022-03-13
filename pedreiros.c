#include <stdlib.h>
#include <stdio.h>

float valorMetro(float metros) {
    if(metros < 10)
        return 10 * metros;
    else
        if(metros < 20)
            return 11.5 * metros;
        else
            return 13 * metros;
}

int main(int argc, char *argv[]) {
	int N, i;
	float vale, transporte, metros;

	do {
        printf("Digite o numero de pedreiros a serem processados: ");
        scanf("%d", &N);
        if(N <= 0)
            printf("Digite um numero inteiro positivo!\n");
    } while(N <= 0);

    for(i = 0; i < N; i++) {
        printf("Digite o valor do vale alimentacao do %d pedreiro: ", i + 1);
        scanf("%f", &vale);
        printf("Digite o valor do transporte unitario do %d pedreiro: ", i + 1);
        scanf("%f", &transporte);
        printf("Digite o numero de metros quadrados produzidos pelo %d pedreiro: ", i + 1);
        scanf("%f", &metros);
        printf("O %d pedreiro devera receber: R$ %.2f.\n\n", i + 1, vale + 2 * transporte + valorMetro(metros));
    }

	system("pause");
	return 0;
}
