/*
Realizar la UNION de 2 conjuntos, A y B, y luego ordenar el conjunto resultante C
de MENOR a MAYOR.
Dados el conjunto A (8) elementos y el conjunto B (10) elementos, Resolver (B + A) = C.
A = {3, 6, 18, 122, 56, 65, 44, 32}
B = {8, 14, 2, 22, 43, 156, 72, 73, 85, 98}            */


#include <stdio.h>


void main(){

    int A[8] = {3, 6, 18, 122, 56, 65, 44, 32};                 //i
    int B[10] = {8, 14, 2, 22, 43, 156, 72, 73, 85, 98};        //j
    int C[18];                                                  //k

    int i = 0;
    int j = 0;
    int k = 0;


    for (k = 0; k < 18; k++)
    {
        C[k] = 0;
    }

    for ( k = 0, i = 0; k < 18 && i < 8; k++, i++)
    {

        C[k] = A[i];

    }

    for ( k = 8 , j = 0 ; k < 18 && j < 10; k++, j++)
    {

        C[k] = B[j];

    }

    printf("\n\nA U B = {");

    for (k = 0; k < 18; k++)
    {
        printf("%i", C[k]);
        if (k<17)
        {
            printf(",");
        }
        
    }

    printf("}");            


    printf("\n\nC = {");            
    for (k = 0; k < 18; k++)
    {
        printf("%i", C[k]);
        if (k<17)
        {
            printf(",");
        }
        
    }

    printf("}");                               //Me falto ordenar el conjunto

    printf("\n\n");

}