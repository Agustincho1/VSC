#include <stdio.h>

/*
Ejercicio 5) Invertir un vector

Definir un vector de 10 elementos y pedir uno a uno los valores de cada celda al usuario.

Una vez completada la carga, mostrar el vector original, invertir sus elementos y volver a mostrarlo invertido. */

void main(){

int iVector[10];
int iVector2[10];
int i;
int j;

printf("\n\nIntroduzca el valor de cada celda:\n");

for ( i = 0; i < 10; i++)
{
    printf("- ");
    scanf("%i", &iVector[i]);
}

printf("\n\n");

for ( i = 0; i < 10; i++)
{
    printf("%i    ", iVector[i]);
}

printf("\n\n\n");

for ( i=9, j=0; i>=0 && j<10; i--, j++)
{
    iVector2[j] = iVector[i];
    printf("%i    ", iVector2[j]);
}

printf("\n\n");

}