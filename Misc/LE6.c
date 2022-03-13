#include <stdlib.h>
#include <stdio.h>

float media(float num1, float num2) {
    return (num1 + num2) / 2;
}

char *situacao(float media) {
    if(media >= 60.0)
        return "Aprovado";
    else
        return "Reprovado";
}

float percentualFaltas(int aulas, int presencas) {
    return (1 - ((float) presencas / aulas)) * 100;
}

int main(int argc, char *argv[]) {
	int totalAulas, matricula, presenca;
	float prova1, prova2, trab1, trab2, mediaProvas, mediaTrab, mediaFinal;

	printf("Digite o numero de aulas da turma: ");
	scanf("%d", &totalAulas);
	printf("Digite o numero de matricula do aluno: ");
	scanf("%d", &matricula);
	printf("Digite a nota da primeira prova: ");
	scanf("%f", &prova1);
	printf("Digite a nota da segunda prova: ");
	scanf("%f", &prova2);
	printf("Digite a nota do primeiro trabalho: ");
	scanf("%f", &trab1);
	printf("Digite a nota do segundo trabalho: ");
	scanf("%f", &trab2);
	printf("Digite o numero de presencas do aluno: ");
	scanf("%d", &presenca);

    printf("\nNumero de matricula do aluno: %d\n", matricula);
    mediaProvas = media(prova1, prova2);
    printf("Media das provas: %.2f\n", mediaProvas);
    mediaTrab = media(trab1, trab2);
    printf("Media dos trabalhos: %.2f\n", mediaTrab);
    mediaFinal = media(mediaProvas, mediaTrab);
    printf("Media final: %.2f\n", mediaFinal);
    printf("Situacao: %s\n", situacao(mediaFinal));
    printf("Percentual de faltas: %.2f\n", percentualFaltas(totalAulas, presenca));

	system("pause");
	return 0;
}
