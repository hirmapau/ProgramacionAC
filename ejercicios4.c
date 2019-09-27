#include<stdio.h>
int main() {

	double F, FaC, FaK;
	printf("Fahrenheit \t Celsius \t kelvin\n" );

	for (F = 0; F <= 100; F = F + 10) { // la primer parte solo se ejecuta UNA vez, la segunda es evaluada para ver si f es menor o igual 
										// igual a 100, si es VERDADERO(si es FALSO se termina el loop), pasa a la tercera parte para actualizar 
										// actualizar el codigo

		FaC = (5.0 / 9.0) * (F - 32);
		FaK = ((F - 32) * (5.0 / 9.0) + 273.1);

		printf("%lf\t %6.1f\t\t %6.1f\n", F, FaC, FaK);

	}



	return 0;
}
