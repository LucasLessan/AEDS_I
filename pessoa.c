#include <stdio.h>
#include <stdlib.h>

#define MAX 10

typedef struct pessoa{
	char nome[50];
	int idade;
	float peso;
	int altura;
}individuo;

individuo nova_pessoa(int i) {
	char *nl;
	individuo p;

	printf("Digite o nome da pessoa %d: ", i + 1);
	fflush(stdin);
	fgets(p.nome, sizeof p.nome, stdin);
    nl=strchr(p.nome, '\n');
    *nl = '\0';
	fflush(stdin);
	printf("Digite a idade da pessoa %d: ", i + 1);
	scanf("%d", &p.idade);
	printf("Digite o peso da pessoa %d: ", i + 1);
	scanf("%f", &p.peso);
	printf("Digite a altura da pessoa %d em centimetros: ", i + 1);
	scanf("%d", &p.altura);
	printf("\n");

	return p;
}

int main(int argc, char *argv[]){
	int i, N;

	individuo vetorCadastro[MAX];

	printf("Digite o numero de de pessoas a serem cadastradas: ");
	scanf("%d", &N);

	printf("\n");

	for(i=0; i<N; i++){
		vetorCadastro[i] = nova_pessoa(i);
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
