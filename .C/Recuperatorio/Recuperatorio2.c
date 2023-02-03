#include <stdio.h>

void main(void){

    int temperaturas[7] = {20,21,22,23,24,25,26};
    int dia = 7;

    int suma, promedio;

    suma = promedio = 100;

    suma = 0;
    for (dia = 0; dia <= 7; dia++)
    {
        suma += temperaturas[dia];
    }
    
    printf("La temperatura promedio es %d", suma/7);
}