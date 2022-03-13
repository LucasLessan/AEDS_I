#include <stdlib.h>
#include <stdio.h>

void ackerman(int n) {
	if(n == 1) {
		printf("1\n\n");
		return;
	}
	if(n % 2 == 0) {
		printf("%d\n", n);
		ackerman(n / 2);
	}
	else {
		printf("%d\n", n);
		ackerman(n * 3 + 1);
	}
}

int main(int argc, char *argv[]) {
	int n;

	printf("Digite um valor: ");
	scanf("%d", &n);

	ackerman(n);

	system("pause");
	return 0;
}
