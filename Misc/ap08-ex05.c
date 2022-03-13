#include <stdio.h>
#include <stdlib.h>

#define MAX 10

typedef struct pessoa{
	char nome[50];
	int idade;
	float peso;
	int altura;
}individuo;

int main(int argc, char *argv[]){
	char *nl;
	int i, N;

	individuo vetorCadastro[MAX];

	printf("Digite o numero de de pessoas a serem cadastradas: ");
	scanf("%d", &N);

	for(i=0; i<N; i++){
		printf("Digite o nome da pessoa %d: ", i + 1);
		fflush(stdin);
		fgets(vetorCadastro[i].nome, sizeof vetorCadastro[i].nome, stdin);
        nl=strchr(vetorCadastro[i].nome, '\n');
        *nl = '\0';
		fflush(stdin);
		printf("Digite a idade da pessoa %d: ", i + 1);
		scanf("%d", &vetorCadastro[i].idade);
		printf("Digite o peso da pessoa %d: ", i + 1);
		scanf("%f", &vetorCadastro[i].peso);
		printf("Digite a altura da pessoa %d em centimetros: ", i + 1);
		scanf("%d", &vetorCadastro[i].altura);
		printf("\n");
	}

	for(i=0; i<N; i++){
		printf("Nome da pessoa %d: %s\n", i + 1, vetorCadastro[i].nome);
		printf("Idade da pessoa %d: %d\n", i + 1, vetorCadastro[i].idade);
		printf("Peso da pessoa %d: %.2f\n", i + 1, vetorCadastro[i].peso);
		printf("Altura da pessoa %d: %.2fm\n", i + 1, (float) vetorCadastro[i].altura / 100);
		printf("\n");
	}

	return (0);
}
