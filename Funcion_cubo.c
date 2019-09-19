#include <stdio.h>
#include <stdlib.h>

double cube(double num) {
	double result = num * num * num;
	return result;

}

int main() {

	printf("resultado: %f", cube (58.0));

	return 0;
}