/*
Ejercicio 1)
Formular la estructura base de un archivo C considerando la función principal y la inclusión de la librería stdio.h

Ejercicio 1.1)
Sobre la base del punto 1. Agregue 2 funciones con su declaración y su definición. Una para Sumar 2 valores enteros y retornando el resultado y otra para Restar 2 valores enteros 
mostrando por pantalla del resultado. 
*/

#include <stdio.h>

int Sumar(int a, int b){

    int iResultado = 0;
    iResultado = (a + b);
    return iResultado;

}

void Restar(int a, int b){

    int iResultado3 = 0;
    iResultado3 = (a - b);
    printf("\n\nLa resta de 1 y 5 es: %i\n\n", iResultado3);

}


void main(){

int iResultado2 =0;
iResultado2 = Sumar(1,5);
printf("\n\nLa suma de 1 y 5 es: %i", iResultado2);

Restar(1,5);

}
