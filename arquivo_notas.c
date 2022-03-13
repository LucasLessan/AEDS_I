#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

#define MAX 80

char opcao_menu() {
	system("cls");
	printf(" (L)istar notas\n");
	printf(" (I)ncluir aluno(a)\n");
	printf(" (F)im\n");
	printf("> ");
	return (toupper(getche()));
}

void listar_notas() {
	int num,notas;
	float n1,n2,media;
	char *nome;
	char buf[MAX];
	FILE *arq;
	arq = fopen("notas.txt","r");
	system("cls");
	if (arq == NULL) {
		printf("Erro ao abrir arquivo\n");
		return;
	}
	printf("NUM |         NOME         |  N1  |  N2 \n");
	printf("----+----------------------+------+------\n");
	notas = 0;
	media = 0;
	while (!feof(arq)) {
        fgets(buf,MAX,arq);
		num = atoi(strtok(buf,","));
		nome = strtok(NULL,",");
		n1 = atof(strtok(NULL,","));
		n2 = atof(strtok(NULL,","));
		printf("%03d | %-20s |%4.1f  |%4.1f\n",num,nome,n1,n2);
		notas += 2;
		media += n1 + n2;
	}
	printf("----+----------------------+------+------\n");
	media /= notas;
	printf("Media das notas = %4.1f\n",media);
	fclose(arq);
}

void novo_aluno() {
	int num;
	float n1,n2;
	char nome[70], *pos;
	FILE *arq;
	arq = fopen("dados.txt","a");
	system("cls");
	if (arq == NULL) {
		printf("Erro ao abrir arquivo\n");
		return;
	}
	printf("Digite o nome do(a) aluno(a): \n");
	fflush(stdin);
	fgets(nome, sizeof nome, stdin);
    if ((pos=strchr(nome, '\n')) != NULL)
        *pos = '\0';
	fflush(stdin);
	printf("Digite o numero do(a) aluno(a): \n");
	scanf("%d", &num);
	printf("Digite a primeira nota do(a) aluno(a): \n");
	scanf("%f", &n1);
	printf("Digite a segunda nota do(a) aluno(a): \n");
	scanf("%f", &n2);
	fprintf(arq, "\n%d,%s,%.1f,%.1f", num, nome, n1, n2);
	fclose(arq);
}

int main(int args, char * arg[]) {
	char op;

	do {
		op = opcao_menu();
		if (op == 'L')
            listar_notas();
		if (op == 'I')
            novo_aluno();
		printf("\n");
		system("pause");
	} while (op != 'F');

	return 0;
}
