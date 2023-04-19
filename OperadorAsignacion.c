#include <stdio.h>

int main(){
    int a,b,c;
    // a = 10;
    // operador de asignacion =
    a = b = c = 10;

    /*
    ES LO MISMO
    a = a +10;
    a +=10 ;
   */

    a +=10; //nos da 20
    a -=5; //nos da 15
    a *=2; // nos da 30
    a /= 2; // nos da 15



    printf("El valor de a, b, c es: %i %i %i",a,b,c);

return 0 ;
}
