#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("O valor da conta apos 3 meses com um montante inicial de R$ 500,00 e juros de 1%% a.m. e': %.2f\n", (((500*1.01)*1.01)*1.01));
    system("pause");
    return 0;
}
