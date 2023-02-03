/*
Ejercicio 2)
Sobre la base del punto 1.1. Desarrolle código necesario para solicitarle al usuario los 2 números enteros a calcular y la operación que desea realizar (Suma o Resta).  
Mostrar el resultado de la operación, los valores ingresados, la operación realizada y consultar al usuario si desea continuar realizando operaciones o finalizar la ejecución.
*/

#include <stdio.h>

int Sumar(int a, int b){

    int iResultado1 = 0;
    iResultado1 = (a + b);
    return iResultado1;

}

void Restar(int a, int b){

    int iResultado2 = 0;
    iResultado2 = (a - b);
    printf("\n\nEl resultado de la resta es: %i\n\n", iResultado2);

}


void main(){

int iNumero1 = 0;
int iNumero2 = 0;
char cOpcion;
int iResultado1 = 0;
int iBandera1;
int iOpcion;

do
{

    printf("\n\nPor favor introduzca el primer numero entero: ");
    scanf("%i", &iNumero1);

    printf("\n\nPor favor introduzca el segundo numero entero: ");
    scanf("%i", &iNumero2);

    do
    {

        iBandera1 = 0;
        
        printf("\n\nElija que tipo de operacion desea realizar Suma(+) Resta(-): ");
        scanf(" %c", &cOpcion);

        if (cOpcion == '+')
        {
            iResultado1 = Sumar(iNumero1,iNumero2);
            printf("\n\nEl resultado de la suma es: %i\n\n", iResultado1);
        }
        
        else if (cOpcion == '-')
        {
            Restar(iNumero1,iNumero2);
        }
        
        else
        {
            iBandera1 = 1;
            printf("\n\nIntroduzca un opcion valida: ");
        }
        
    } while (iBandera1 == 1);

    printf("\n\nSi desea seguir realizando operaciones introduzca 0, si desea finalizar introduzca 1: ");
    scanf("%i", &iOpcion);


} while (iOpcion == 0);

printf("\n\n\n");

}
