#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
	int i, N, *vetor, totalIdades = 0;

	printf("Digite o numero de alunos da sala: ");
	scanf("%d", &N);

	vetor = (int *) malloc(N * sizeof(int));

	printf("\n");

	if(N) {
        for(i = 0; i < N; i++) {
            printf("Digite a idade do aluno %d: ", i + 1);
            scanf("%d", &vetor[i]);
            totalIdades += vetor[i];
        }
        printf("\nMedia das idades dos alunos: %.2f\n\n", (float) totalIdades / N);
	}
	else
        printf("Não foi possivel alocar memoria solicitada!\n\n");

	system("pause");
	return 0;
}
