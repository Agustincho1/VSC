#include <stdio.h>

/*Escriba el código necesario para que se soliciten al usuario una cantidad de letras a ingresar y el inicio de la serie (primera letra). 
Solicitar una a una las “n” letras del abecedario verificando que se la siguiente de la letra anteriormente ingresa. Para el primer ingreso verificar contra la letra 
de inicio y se llega a la “Z” la próxima letra es nuevamente “A”.
Si el usuario ingresa una letra no correlativa a la secuencia el programa debe finalizar mostrando el mensaje: Se finalizó porque la  Letra es incorrecta.  
Si logra ingresar la secuencia correcta finalizar mostrando el mensaje: Fin del programa sin errores.
*/

void main(){

int iCantidadLetras;
int iHastaAca = 1;
char cLetraInicio;
char cLetraSiguiente;


printf("\n\nIntroduzca la cantidad de letras a ingresar: ");
scanf("%i", &iCantidadLetras);

printf("\n\nIntroduzca la primer letra: ");
scanf(" %c", &cLetraInicio);

printf("\n\nUsted inserto la letra %c\n", cLetraInicio);
do
{

    printf("\n\nIntoduzca la siguiente letra del abecedario: ");
    scanf(" %c", &cLetraSiguiente);
    
    cLetraInicio++;


    if (cLetraSiguiente != cLetraInicio)
    {
        printf("\n\nSe finalizo porque la letra es incorrecta.\n\n");
        exit(-1);
    }

    if (cLetraInicio == 90)
    {
        cLetraInicio = (cLetraInicio - 26);
    }
    
    iHastaAca++;

} while (iHastaAca < iCantidadLetras);
    

printf("\n\nFin del programa sin errores.\n\n");


}