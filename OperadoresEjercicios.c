/*
Pedir dos numeros al usuario, sumarlos, restarlos, multiplicarlos y dividirlos

*/

#include <stdio.h>

int main(){

 int a,b;
 int suma, resta, multiplicacion;
 float division;
 a,b,suma, resta, multiplicacion, division= 0;


 printf("Por favor, digite los numeros 'a' y 'b' para hacer las operaciones correspondientes: \n");
 scanf("%i %i",&a, &b);

 suma = a + b;
 resta = a - b;
 multiplicacion = a * b;

 if (b != 0){
         division = a / b;

 }else{
    printf("\nEl operador 'b' es cero por lo que la division no se puede hacer");
 }

 printf("\n\n La suma de 'a' y 'b' es: %i ",suma);
 printf("\nLa resta de 'a' y 'b' es: %i ", resta);
 printf("\nLa multiplicacion de 'a' y 'b' es: %i ", multiplicacion);
 if(b != 0){
    printf("\nLa division de 'a' y 'b' es: %.2f ", division);

 }else{
    printf("\nComo el operador 'b' es igual a cero no se pudo efectuar la division");
 }


return 0;
}
