#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
	int cred1, cred2, cred3, totalCreditos, totalConceitos;
	float nota1, nota2, nota3;
	totalCreditos = totalConceitos = 0;

	printf("Digite a nota da primeira disciplina: ");
	scanf("%f", &nota1);
	if(nota1 < 0 || nota1 > 100)
        printf("Valor invalido!\n");
    else {
        printf("Digite o numero de creditos da primeira disciplina: ");
        scanf("%d", &cred1);
        if(cred1 < 2 || cred1 > 6)
            printf("Valor invalido!\n");
        else
            totalCreditos += cred1;
    }

	printf("Digite a nota da segunda disciplina: ");
	scanf("%f", &nota2);
	if(nota2 < 0 || nota2 > 100)
        printf("Valor invalido!\n");
    else {
        printf("Digite o numero de creditos da segunda disciplina: ");
        scanf("%d", &cred2);
        if(cred2 < 2 || cred2 > 6)
            printf("Valor invalido!\n");
        else
            totalCreditos += cred2;
    }

	printf("Digite a nota da terceira disciplina: ");
	scanf("%f", &nota3);
	if(nota3 < 0 || nota3 > 100)
        printf("Valor invalido!\n");
    else {
        printf("Digite o numero de creditos da terceira disciplina: ");
        scanf("%d", &cred3);
        if(cred3 < 2 || cred3 > 6)
            printf("Valor invalido!\n");
        else
            totalCreditos += cred3;
    }

    if(nota1 >= 90)
        totalConceitos += cred1 * 5;
    else
        if(nota1 >= 80)
            totalConceitos += cred1 * 4;
        else
            if(nota1 >= 70)
                totalConceitos += cred1 * 3;
            else
                if(nota1 >= 60)
                    totalConceitos += cred1 * 2;
                else
                    if(nota1 >= 40)
                        totalConceitos += cred1;

    if(nota2 >= 90)
        totalConceitos += cred2 * 5;
    else
        if(nota2 >= 80)
            totalConceitos += cred2 * 4;
        else
            if(nota2 >= 70)
                totalConceitos += cred2 * 3;
            else
                if(nota2 >= 60)
                    totalConceitos += cred2 * 2;
                else
                    if(nota2 >= 40)
                        totalConceitos += cred2;

    if(nota3 >= 90)
        totalConceitos += cred3 * 5;
    else
        if(nota3 >= 80)
            totalConceitos += cred3 * 4;
        else
            if(nota3 >= 70)
                totalConceitos += cred3 * 3;
            else
                if(nota3 >= 60)
                    totalConceitos += cred3 * 2;
                else
                    if(nota3 >= 40)
                        totalConceitos += cred3;

	system("pause");
	return 0;
}
