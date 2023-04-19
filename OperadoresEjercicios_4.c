/*
Hacer un programa que calcule el area de los trapecios
*/

#include <stdio.h>

int main(){
    float area, bMayor, bMenor, altura = 0;

    printf("Por favor, ingrese en orden la BASE MAYOR, LA BASE MENOR Y LA ALTURA:\n");
    scanf("%f %f %f",&bMayor, &bMenor, &altura);


    area = ((bMayor + bMenor) / 2 ) * altura;

    printf("El area del trapecio es de: %.2f", area);

return 0;
}
