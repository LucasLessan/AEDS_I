#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int i = pow(2, 31) - 1;
    short int si = pow(2, 15) - 1;
    unsigned char uc = pow(2, 8) - 1;

    printf("Maior inteiro possivel: %d\n", i);
    printf("Maior inteiro curto possivel: %d\n", si);
    printf("Maior caracter sem sinal possivel: %d\n", uc);
    i++;
    si++;
    uc++;
    printf("Overflow do inteiro: %d\n", i);
    printf("Overflow do inteiro curto: %d\n", si);
    printf("Overflow do caracter: %d\n", uc);
    system("pause");
    return 0;
}
