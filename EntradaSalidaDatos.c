#include <stdio.h>

int main(){
    int a = 10;
    float b = 15.5;
    char c = 'e';

    //printf("%i %.1f %c", a,b,c);

    int d;
    float e;
    char m;

    /* printf("Digite el valor de la variable d: ");
    scanf("%i",&d);
    printf("El valor es: %i",d);

    printf("\nDigite el valor de la variable e: ");
    scanf("%f",&e);
    printf("El valor es: %f",e);

    printf("\nDigite el valor de la variable m: ");
    scanf("%c",&m);
    printf("El valor es: %c",m);
*/

    char nombre[50];

    printf("Escriba su nombre completo: ");
    //scanf("%s",nombre);
    // solo te lee hasta el espacio si pones el nombre con apellido no te va a guardar
    // el apellido
    gets(nombre);
    printf("Su nombre es: %s", nombre);
return  0;
}
