#include <stdlib.h>
#include <stdio.h>

void calculaBinario(int x) {
    if(x < 2) {
        printf("%d", x % 2);
        return;
    }
    calculaBinario(x / 2);
    printf("%d", x % 2);
}

int main(int argc, char *argv[]) {
	int num;

	printf("Digite o numero em decimal: ");
	scanf("%d", &num);

	printf("\nForma binaria:  ");

	calculaBinario(num);

	printf("\n\n");

	system("pause");
	return 0;
}
