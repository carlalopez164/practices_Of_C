#include <stdio.h>
/*
 Calcule la media aritmetica de 3 numeros cualquiera
 * */
int main(){
    int a,b,c, media= 0;

    printf("Inserte los numeros para calcular su media: \n");
    scanf("%i %i %i",&a,&b,&c);

    media = (a+b+c)/3;

    printf("La media aritmetica de %i ,%i y %i es %i",a,b,c,media);



    return 0;
}
