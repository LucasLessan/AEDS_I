#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_VET 4

// declaracao do modelo data
struct data{
	int dia, mes, ano;
};

// declaracao do modelo aluno
struct aluno{
	char nome[50];
	double mediaFinal;
	struct data nascimento;
};

int main(){
    char *nl;
	int i;

	// declaracao e inicialização do vetor de estruturas vet
	struct aluno faculdade[TAM_VET];

	for(i=0; i<TAM_VET; i++){
		printf("Digite o nome do aluno %d: ", i + 1);
		fflush(stdin);
		fgets(faculdade[i].nome, sizeof faculdade[i].nome, stdin);
        nl=strchr(faculdade[i].nome, '\n');
        *nl = '\0';
		fflush(stdin);
		printf("Digite a media final do aluno %d: ", i + 1);
		scanf("%lf", &faculdade[i].mediaFinal);
		printf("Digite o dia de nascimeto do aluno %d: ", i + 1);
		scanf("%d", &faculdade[i].nascimento.dia);
		printf("Digite o mes de nascimeto do aluno %d: ", i + 1);
		scanf("%d", &faculdade[i].nascimento.mes);
		printf("Digite o ano de nascimeto do aluno %d: ", i + 1);
		scanf("%d", &faculdade[i].nascimento.ano);
	}

	puts("\nImprimindo os dados.\n");

	for(i=0; i<TAM_VET; i++){
		printf("Nome do aluno %d: %s\n", i + 1, faculdade[i].nome);
		printf("Media final do aluno %d: %.2lf\n", i + 1, faculdade[i].mediaFinal);
		printf("Data de nascimeto do aluno %d: %d/%d/%d\n\n", i + 1, faculdade[i].nascimento.dia, faculdade[i].nascimento.mes, faculdade[i].nascimento.ano);
	}

	return (0);
}
