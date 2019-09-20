#include <stdio.h>
#include <stdlib.h>

struct estudiante {
	char nombre[50];	//en los structs puedes almacenar varios tipos de datos en 'una sola variable'
	char titulo[50];
	int edad;
	double estatura;
};

int main() {
	struct estudiante alumno1; //declarando que adentro del struct, una variable(alumno1) tendra los datos del struct
	alumno1.edad = 22;
	alumno1.estatura = 1.70;
	strcpy(alumno1.nombre, "Marco Lopez");
	strcpy(alumno1.titulo, "negocios internacionales");
	printf("%lf\n", alumno1.estatura);
	printf("%i\n", alumno1.edad);
	printf("%s\n", alumno1.nombre);
	printf("%s\n", alumno1.titulo);
	return 0;
}