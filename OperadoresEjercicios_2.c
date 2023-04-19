/*
Sacar la hipotenusa de un trtiagunlo rectangulo, pidiendo al usuario el valor de los 2 catetos

*/

#include <stdio.h>
#include <math.h>

int main(){

    float c1,c2, hipo = 0;

    printf("Ingrese el valor de los catetos para sacar la hipotenusa: \n");
    scanf("%f %f",&c1, &c2);

    hipo = sqrt(pow(c1,2) + pow(c2,2));

    printf("La hipotenusa del triangulo rectangulo es: %.2f", hipo);

return 0;
}
