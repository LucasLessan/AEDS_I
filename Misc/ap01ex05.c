#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    float a = 1.5, e = 1.2, f = 4.3;
    int b = 4, c = 2, d = 3;

    printf("V1 = %f\n", (a * (c + d)) / (b * (e + f)));
    printf("V2 = %f\n", (pow(a, (b + c))) / (e + f) + d);
    printf("V3 = %f\n", b * (-1) + sqrt(pow(b, 2) - 4 * a * c) / (2 * a));
    system("pause");
    return 0;
}
