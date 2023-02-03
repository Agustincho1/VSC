/*
Listar los números naturales utilizando los 3 tipos de bucles. 
Implementando para cada tipo una función que liste los primeros 100 números naturales comenzando en 1 (uno).
El usuario será quien decida qué tipo de bucle correr ingresando: F, W, D o X para finalizar el programa. 
Utilizar condicional múltiple para la llamada a la funciones.
Nota: Mostrar por pantalla un mensaje que indique con qué bucle se realiza el conteo antes de mostrar el conteo.                       */

#include <stdio.h>

void BucleFor(){

    printf("\n\nUsted eligio el bucle For\n");
    
    for (int i = 1; i < 101; i++)
    {
        printf("\n-%i", i);
    }

    printf("\n\n");

}

void BucleWhile(){

    printf("\n\nUsted eligio el bucle While\n");
   
    int i = 1;
    

        while (i<=100)
        {
        
        printf("\n-%i", i);
        i++;
        
    }

    printf("\n\n");

}

void BucleDo(){

    printf("\n\nUsted eligio el bucle DoWhile\n");

    int i =1;
    
    do
    {
        printf("\n-%i", i);
        i++;

    } while (i<=100);

    printf("\n\n");

}

void main(){

    char cOpcion;

    printf("\n\nIntroduzca que tipo de bucle desea utilizar: ");
    printf("\nFor(F)");
    printf("\nWhile(W)");
    printf("\nDoWhile(D)");
    printf("\nFinalizar el programa(X)\n\n");
    
    scanf("%c", &cOpcion);

    switch (cOpcion)
    {
    case 'F':
        BucleFor();
        break;
    
    case 'W':
        BucleWhile();
        break;

    case 'D':
        BucleDo();
        break;

    case 'X':
        exit(-1);
        break;
    
    default:
        break;
    }

}
