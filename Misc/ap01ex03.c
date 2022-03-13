#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int a, b, c, s;

    printf("Informe o valor de um lado do triangulo: ");
    scanf("%d", &a);
    printf("Informe o valor de outro lado do triangulo: ");
    scanf("%d", &b);
    printf("Informe o valor do ultimo lado do triangulo: ");
    scanf("%d", &c);
    s = (a + b + c) / 2;
    printf("A area desse triangulo e' %.2f.\n", sqrt((int)s * (s - a) * (s - b) * (s - c)));
    system("pause");
    return 0;
}

