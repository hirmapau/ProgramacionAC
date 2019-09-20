#include <stdio.h>
#include <stdlib.h>

int main() {
	double num1, num2;
	char op;

	printf("Introduce tu numero: ");
	scanf_s("%lf", &num1);
	printf("Introduce el tipo de operacion: ");
	scanf_s(" %c", &op);
	printf("Introduce otro numero: ");
	scanf_s("%lf", &num2);


	if (op == '+') {
		printf("%lf", num1 + num2);
	}
	else if (op == '-') {
		printf("%lf", num1 - num2);
	}
	else if (op == '*') {
		printf("%lf", num1 * num2);
	}
	else if (op == '/') {
		printf("%lf", num1 / num2);
	}
	else {
		printf("algo hiciste mal");
	}
	return 0;
}