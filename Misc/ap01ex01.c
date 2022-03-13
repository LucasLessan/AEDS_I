#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main(int argc, char *argv[]) {
    float rad = 0;

    printf("Informe o valor do angulo em graus: ");
    scanf("%f", &rad);
    printf("O seno de %.2f e' %.2f.\n", rad, sin(rad * PI / 180));
    system("pause");
    return 0;
}
