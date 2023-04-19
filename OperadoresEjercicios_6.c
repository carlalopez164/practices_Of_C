/*
 * Una tienda ofrece descuento del 15% sobre el total de la compra
 * y un cliente desea saber cuanto debera pagar finalmente
 * por su compra
 * */

#include <stdio.h>
#define DESC 0.15
int main(){
    float compra, totalCompra =0;
    printf("Complete el total de la compra para aplicarle el descuento:\n");
    scanf("%f",&compra);

    totalCompra = compra - (compra*DESC);

    printf("El total de la compra con el descuento te quedaria en: $%.2f", totalCompra);

    return 0;
}