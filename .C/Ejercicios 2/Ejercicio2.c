#include <stdio.h>

/* Calculadora de moneda extranjera

Escriba el código necesario para que seleccionando una moneda de Origen, una moneda de 
Destino y el valor de origen nos convierta al valor de la nueva moneda considerando hasta 2 
decimales.
El programa debe finalizar cuando se introduzca como moneda de Origen: X.

Debe validar la Moneda de Origen (P,D,E,R,X), Moneda de Destino (P,D,E,R) y que se ingrese 
un valor mayor a 0.

	Considerar para las conversiones las monedas: 
Pesos ($), 
Dolares (u$s)
Euro (e$)
Real (r$)
		Y sus valores respecto al peso Argentino: 
		[ Considerar variables tipo constante                                              
                                 
u$s 112.09 
e$ 170.72
r$ 88.92
	
    Ej:  
    Moneda Origen: Pesos 	
    Moneda Destino: Dolares
    Cantidad origen: 100
    Resultado: La conversión de [Pesos] a [Dolares] es: u$s 0.89
*/

char cMonedaOrigen;
char cMonedaDestino;
float fMonto = 0;
const float fPeso = 1;
const float fDolar = 112.09;
const float fEuro = 170.72;
const float fReal = 88.92;
float fConversion1;
float fConversion2;


void main(){

int iCorte = 0;
int iCorte2 = 0;

printf("\n\nBienvenido a la calculadora de moneda extranjera");

printf("\n\nElija la moneda de origen:");
printf("\nPeso(P)");
printf("\nDolar(D)");
printf("\nEuro(E)");
printf("\nReal(R)");
printf("\nFinalizar el programa(X)\n\n\t\t");
scanf("%c",&cMonedaOrigen);

do
{

    switch (cMonedaOrigen)
    {
        case 'P':
            iCorte = 0;
            break;

        case 'D':
            iCorte = 0;
            break;

        case 'E':
            iCorte = 0;
            break;

        case 'R':
            iCorte = 0;
            break;

        case 'X':
            exit (1);
            break;

        default:
            iCorte = 1;
            if (iCorte == 1){
            printf("\n\nPor favor seleccione una opcion valida\n\n\t\t");
            }
            scanf("%c",&cMonedaOrigen);
            break;
    }
} while (iCorte == 1);

printf("\n\nElija la moneda de destino:");
printf("\nPeso(P)");
printf("\nDolar(D)");
printf("\nEuro(E)");
printf("\nReal(R)\n\n\t\t");
scanf(" %c",&cMonedaDestino);





printf("\n\nIntroduzca el monto a convertir: $");
scanf("%f",&fMonto);

if (fMonto == 0)
{
    do
    {
        printf("\n\nEl monto a convertir no puede ser 0, por favor introduzca un valor diferente:\n\t\t$");
        scanf("%f",&fMonto);
    } while (fMonto == 0);
}


switch (cMonedaOrigen)
{
case 'P':
    fConversion1 = fMonto*fPeso;
    break;

case 'D':
    fConversion1 = fMonto*fDolar;
    break;

case 'E':
    fConversion1 = fMonto*fEuro;
    break;

case 'R':
    fConversion1 = fMonto*fReal;
    break;


default:
    break;
}

switch (cMonedaDestino)
{
case 'P':
    fConversion2 = fConversion1/fPeso;
    printf("La conversion de Pesos a Pesos es: $%.2f",fConversion2);
    break;

case 'D':
    fConversion2 = fConversion1/fDolar;
    printf("La conversion de Pesos a Dolares es: $%.2f",fConversion2);
    break;

case 'E':
    fConversion2 = fConversion1/fEuro;
    printf("La conversion de Pesos a Euros es: $%.2f",fConversion2);
    break;

case 'R':
    fConversion2 = fConversion1/fReal;
    printf("La conversion de Pesos a Reales es: $%.2f",fConversion2);
    break;

default:
    printf("\n\nPor favor seleccione una opcion valida");
    break;
}

}



