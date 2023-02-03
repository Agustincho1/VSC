#include <stdio.h>

/*Dado un vector de 8 posiciones, se pide realizar “n” pasos para mostrar el avance de 
un número a lo largo del vector.

Operación: 
En el primer paso, deberá mostrar el vector con todos “0” (Ceros).
En los pasos posteriores se deberá mostrar un “1” (Uno) en la primer posición, un “1” (uno) 
en la segunda posición, y así sucesivamente hasta mostrar un “1” (uno) en la última posición 
del vector como muestra la imagen.
*/

void main(){

int iVector[8];
int iPaso = 1;
int i;

printf("\n\n");

for (i = 0; i < 8; i++)
{
    iVector[i] = 0;
    printf("%i    ", iVector[i]);
}

printf("\n\n");

do
{

    for (i = 0; i < 8; i++)
    {
        iVector[i] = 0;

        if ((i+1) == iPaso)
        {
            iVector[i]=1;
        }
    
        printf("%i    ", iVector[i]);
    }

    printf("\n\n");

    iPaso++;

} while (iPaso <= 8);

printf("\n");

}

