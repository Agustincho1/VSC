/*1. Desarrollar un programa que cargue un arreglo de 20 elementos
(utilice #define para la LARGO_ARREGLO), con valores aleatorios entre 100 y 200
(utilice #define para el parámetro). Luego de cargarlo, deberá llamar a una
función que deberá retornar por cada elemento del arreglo para determinar
si es o no mayor a 150. Mostrar una lista por pantalla con: elemento, valor ,
Si/No (si es mayor a 150)
Ej: Elemento Valor Mayor a 100
1 110 SI
2 80 NO
3 190 SI
4 5 NO                                      */


#include <stdio.h>

#define LARGO_ARREGLO 20


void main(){

int Arreglo[LARGO_ARREGLO];

for (int i = 0; i < LARGO_ARREGLO; i++)
{
    
    Arreglo[i] = ( (rand()%100) + 100);

}

for (int i = 0; i < LARGO_ARREGLO; i++)
{
    
    printf("\n\n%i", Arreglo[i]);

}



}