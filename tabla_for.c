/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

#include <stdio.h>



int main()
{

	int inicial, final, i, numero, prod_num;
	puts("\v\t\t\tEste programa te imprime una tabla de multiplicar\n");
	puts("\t\t\tde un NUMERO desde un numero inicial\n");
	puts("\t\t\thasta un numero final");
	printf("Valor inicial: ");
	scanf_s("%d", &inicial);
	printf("Ingrese el valor final: ");
	scanf_s("%d", &final);
	printf("Ingrese el NUMERO: ");
	scanf_s("%d", &numero);

	for (i = inicial; i <= final; ++i)
	{
		prod_num = i * numero;
		printf("%d x %d = %2d \n", numero, i, prod_num);

	}
}