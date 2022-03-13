#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

int MDC (int A, int B) {
    int resto;
    while(B != 0) {
        resto = A % B;
        A = B;
        B = resto;
	}
    return A;
}

int main(int argc, char *argv[]) {
	int num1, num2;
	char c = "";

	do {
        do {
            printf("Digite o primeiro valor: ");
            scanf("%d", &num1);
            printf("\n");
            if(num1 <= 0)
                printf("Digite um numero valido!\n\n");
        } while(num1 <= 0);

        do {
            printf("Digite o segundo valor: ");
            scanf("%d", &num2);
            printf("\n");
            if(num2 <= 0)
                printf("Digite um numero valido!\n\n");
        } while(num2 <= 0);

        printf("O MDC e: %d\n\n", MDC(num1, num2));

        printf("Continua? (S/N)\n");
        fflush(stdin);
        c = getche();
        printf("\n\n");

	} while((c == 'S') || (c == 's'));

	system("pause");
	return 0;
}
