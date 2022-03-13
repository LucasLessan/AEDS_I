#include <stdlib.h>
#include <stdio.h>

int aprovadoFrequencia(int aulas, int presencas) {
    if((float) presencas / aulas >= 0.75)
        return 1;
    else
        return 0;
}

char conceito(float nota) {
    if(nota >= 90)
        return 'A';
    else
        if(nota >= 80)
            return 'B';
        else
            if(nota >= 70)
                return 'C';
            else
                if(nota >= 60)
                    return 'D';
                else
                    if(nota >= 40)
                        return 'E';
                    else
                        return 'F';
}

int main(int argc, char *argv[]) {
	int disciplinas, aulas, presencas, i;
	float nota;

	do {
        printf("Digite o numero de disciplinas cursadas: ");
        scanf("%d", &disciplinas);
        if(disciplinas <= 0)
            printf("Digite um numero maior que zero!\n\n");
	} while(disciplinas <= 0);

	printf("\n");

	for(i = 1; i <= disciplinas; i++) {
        do {
            printf("Digite o numero de aulas da disciplina %d lecionadas: ", i);
            scanf("%d", &aulas);
            if(aulas <= 0)
                printf("Digite um numero maior que zero!\n\n");
        } while(aulas <= 0);
        do {
            printf("Digite o numero de aulas da disciplina %d assistidas: ", i);
            scanf("%d", &presencas);
            if(presencas < 0)
                printf("Digite um numero nao negativo!\n\n");
        } while(presencas < 0);
        do {
            printf("Digite a nota obtida na disciplina %d: ", i);
            scanf("%f", &nota);
            if(nota < 0 || nota > 100)
                printf("Digite uma nota entre 0 e 100!\n\n");
        } while(nota < 0 || nota > 100);

        if(aprovadoFrequencia(aulas, presencas)) {
            if(nota >= 60)
                printf("O aluno foi aprovado na disciplina %d com conceito %c.\n\n", i, conceito(nota));
            else
                printf("O aluno foi reprovado na disciplina %d com conceito %c.\n\n", i, conceito(nota));
        }
        else
            printf("O aluno foi reprovado por frequencia, seu conceito e I.\n\n");
	}

	system("pause");
	return 0;
}
