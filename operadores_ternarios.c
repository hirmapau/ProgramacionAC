/* ********************* TEXTO SIN ACENTOS *********************/
// Recuerda documentar tus codigos

// El operador ternario

#include <stdio.h>



int main(){

int a, b;

printf("\vescriba dos numeros separados por un espacio.\n\v");
scanf("%i %i", &a, &b);

a==b ? printf("a y b son iguales\n\v") : printf("\va y b son diferentes\n\v");//si la condicion es verdadera (?) se imprime lo primero, si no se cumple(:) se cumple lo segundo

return 0;
}
