/*
Convertir grados Celsius a grados Fahrenheit

*/
#include <stdio.h>

int main(){

    float gradosC, gradosF = 0;

    printf("Ingrese los grados C para hacer la conversion:\n");
    scanf("%f",&gradosC);

    gradosF = (gradosC * 1.8 ) + 32;

    printf("Los grados Celsius %.2f en grados Fahrenheit es igual %.2f",gradosC, gradosF);


return 0;
}
