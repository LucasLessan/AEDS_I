#include <stdlib.h>
#include <stdio.h>

void ordena1(int v[], int n) {
	int i, j, maior, aux, pos;

	for(i = n; i >= 0; i--) {
        maior = v[i];
        pos = i;
		for(j = i - 1; j >= 0; j--) {
			if(v[j] > maior) {
				maior = v[j];
				pos = j;
			}
		}
		aux = v[i];
		v[i] = maior;
		v[pos] = aux;
	}
}

int main(int argc, char *argv[]) {
	int i, n, *v;
	FILE *arq;

	arq = fopen("vetor.txt", "r");

	if(arq == NULL) {
		printf("Nao foi possivel abrir o arquivo!\n\n");
		system("pause");
		return 1;
	}

	fscanf(arq, "%d", &n);

	v = malloc(sizeof *v * n);

	if(v == NULL) {
		printf("Nao foi possivel alocar o vetor!\n\n");
		system("pause");
		return 1;
	}

	for(i = 0; i < n; i++)
		fscanf(arq, "%d", &v[i]);

	fclose(arq);

	arq = fopen("vetor_ordenado.txt", "w");

	ordena1(v, n - 1);

	fprintf(arq, "%d ", n);

	for (i = 0; i < n - 1; i++)
		fprintf(arq, "%d ", v[i]);

	fprintf(arq, "%d", v[i]);

	printf("O vetor foi ordenado com sucesso!\n\n");

	system("pause");
	return 0;
}
