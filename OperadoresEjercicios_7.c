//
// Created by carla on 19/4/23.
//
/* Dadas las horas trabajadas de una persona y el valor por hora
 * calcular su salario e imprimirlo.
 * */

#include <stdio.h>

int main(){
    int horasT, sueldoxHora, sueldoTotal = 0;

    printf("Ingrese en orden, el valor por hora de trabajo y la cantidad de horas trabajadas:\n");
    scanf("%i %i",&sueldoxHora, &horasT);

    sueldoTotal = horasT * sueldoxHora;

    printf("El sueldo total por la cantidad de horas ingresadas es: %i", sueldoTotal);

    return 0;
}