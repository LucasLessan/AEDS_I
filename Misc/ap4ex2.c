#include <stdlib.h>
#include <stdio.h>

int testaImpar(int num) {
    if(num % 2 != 0)
        return 1;
    else
        return 0;
}

int main(int argc, char *argv[]) {
	int numeroMax, i, j = 0;

	printf("Digite um numero inteiro: ");
	scanf("%d", &numeroMax);
	printf("\n");

	if(numeroMax != 0) {
        if(numeroMax > 0){
            for(i = 1; i <= numeroMax; i++) {
                if(testaImpar(i)) {
                    printf("%d ", i);
                    j++;
                }
                if(j % 10 == 0)
                    printf("\n");
            }
        }
        else {
            for(i = -1; i >= numeroMax; i--) {
                if(testaImpar(i)) {
                    printf("%d ", i);
                    j++;
                }
                if(j % 10 == 0)
                    printf("\n");
            }
        }
	}
	else
        printf("Nao existem numeros impares entre 0 e 0.\n");

	printf("\n\n");

	system("pause");
	return 0;
}
