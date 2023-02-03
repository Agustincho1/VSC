/*
Ejercicio 1) Abecedario

Escriba el código necesario para que se soliciten al usuario una cantidad de letras a ingresar y el inicio de la serie (primera letra). 
Solicitar una a una las “n” letras del abecedario verificando que se la siguiente de la letra anteriormente ingresa. 
Para el primer ingreso verificar contra la letra de inicio y se llega a la “Z” la próxima letra es nuevamente “A”.
Si el usuario ingresa una letra no correlativa a la secuencia el programa debe finalizar mostrando el mensaje: Se finalizó porque la  Letra es incorrecta.  
Si logra ingresar la secuencia correcta finalizar mostrando el mensaje: Fin del programa sin errores.                                                                           */

#include <stdio.h>

void main(){

    char cPrimerLetra;
    int iCantidadLetras = 0;
    int iAuxiliar = 0;
    char cSiguienteLetra;
    int iContador = 0;

    printf("\n\nIntroduzca la cantidad de letras a mostrar: ");
    scanf("%i",&iCantidadLetras);

    printf("\n\nIntroduzca la primer letra: ");
    scanf(" %c",&cPrimerLetra);

    iAuxiliar = cPrimerLetra;
    
    printf("\n\nLa primer letra es %c.", cPrimerLetra);

    for (cPrimerLetra; iContador < iCantidadLetras ; cPrimerLetra++)
    {
        printf("\nIntroduzca la siguiente letra: ",cPrimerLetra);
        
        if (cPrimerLetra == 90)
        {
            cPrimerLetra = (cPrimerLetra - 26);
        }

        scanf(" %c",&cSiguienteLetra);

        if (cSiguienteLetra != (cPrimerLetra + 1))
        {
            printf("\n\nSe finalizo porque la letra es incorrecta");
            exit(-1);
        }
        
        iContador++;

    }

    printf("\n\n");
}