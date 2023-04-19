/*
Hacer un programa que calcule longitudes de circunferencia
*/
#include <stdio.h>
#define PI 3.14159265358979323846


int main(){
    float longtidud, radio = 0;

    printf("Ingrese el radio de la circunferencia: ");
    scanf("%f",&radio);

    longtidud = 2 * PI * radio;

    printf("La longitud de circunferencia es de: %.2f", longtidud);


return 0;
}
