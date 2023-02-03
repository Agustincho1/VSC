#include <stdio.h>

/*
Ejercicio 6) UNION de conjuntos

Dados el conjunto A (5) elementos y el conjunto B (7) elementos:

A[5] = {3; 6; 8; 22; 56}
B[7] = {8; 14; 33; 22; 43; 56; 72}

Resolver A + B = C                                          */

void main(){

int A[5] = {3,6,8,22,56};
int B[7] = {8,14,33,22,43,56,72};
int i;
int j;

printf("\n\nA = {3,6,8,22,56}");
printf("\n\nB = {8,14,33,22,43,56,72};");
printf("\n\nA + B = C");
printf("\n\nC = {");

for ( i = 0; i < 5; i++)
{
    if (i > 0)
    {
       printf(",");
    }
    
    printf("%i", A[i]);
}

for ( j = 0; j < 7; j++)
{
    printf(",%i", B[j]);
}

printf("}\n\n");

}