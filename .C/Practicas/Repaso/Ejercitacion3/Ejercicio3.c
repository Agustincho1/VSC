/*
Ejercicio 3) Recorremos un vector

Dado un vector de 8 posiciones, se pide realizar “n” pasos para mostrar el avance de un número a lo largo del vector.

Operación: 
En el primer paso, deberá mostrar el vector con todos “0” (Ceros).
En los pasos posteriores se deberá mostrar un “1” (Uno) en la primer posición, un “1” (uno) en la segunda posición, 
y así sucesivamente hasta mostrar un “1” (uno) en la última posición del vector como muestra la imagen.                                                               */     

#include <stdio.h>

void main()
{

    int iPasos = 0;
    int iVector[8];


    printf("\n\n");

    for ( int i = 0; i < 8; i++)
    {
        iVector[i] = 0;
        printf("  %i", iVector[i]);
    }

    printf("\n");

    do
    {
    
        for ( int i = 0; i < 8; i++)
        {
            
            iVector[i] = 0;

            if (i == iPasos )
            {
                iVector[i] = 1;
            }
            

            printf("  %i", iVector[i]);
        }
    
        printf("\n");

        iPasos++;

    } while (iPasos<8);


    printf("\n\n\n");


}

