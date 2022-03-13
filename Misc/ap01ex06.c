#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    float a, b, c, delta;
    printf("Insira o valor do coeficiente a: ");
    scanf("%f", &a);
    printf("Insira o valor do coeficiente b: ");
    scanf("%f", &b);
    printf("Insira o valor do coeficiente c: ");
    scanf("%f", &c);
    delta = pow(b, 2) - 4 * a * c;
    printf("Delta = %.2f\n", delta);
    printf("Primeira Raiz = %.2f\n", (b * (-1) + sqrt(delta)) / (2 * a));
    printf("Segunda Raiz = %.2f\n", (b * (-1) - sqrt(delta)) / (2 * a));
    system("pause");
    return 0;
}
