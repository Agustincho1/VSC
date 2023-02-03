/*Ejercicio 2) Calculadora de moneda extranjera

Escriba el código necesario para que seleccionando una moneda de Origen, 
una moneda de Destino y el valor de origen nos convierta al valor de la nueva moneda considerando hasta 2 decimales.
El programa debe finalizar cuando se introduzca como moneda de Origen: X.

Debe validar la Moneda de Origen (P,D,E,R,X), Moneda de Destino (P,D,E,R) y que se ingrese un valor mayor a 0.

Considerar para las conversiones las monedas: 
    Pesos ($), 
    Dolares (u$s)
    Euro (e$)
    Real (r$)
    
Y sus valores respecto al peso Argentino: 
[ Considerar variables tipo constantes ]

    u$s 112.09 
    e$ 170.72
    r$ 88.92

Ej:  
Moneda Origen: Pesos 	
Moneda Destino: Dolares
Cantidad origen: 100
Resultado: La conversión de [Pesos] a [Dolares] es: u$s 0.89                      */

#include <stdio.h>

const float Pesos = 1;
const float Dolar = 112.09;
const float Euro = 170.72;
const float Real = 88.92;


void main()
{

    char cMonedaOrigen;
    float fMoneda1;
   
    char cMonedaDestino;
    float fMoneda2;
    
    float fCantidad;
    
    int Parar = 1;
    
    float fTotal;

    char cMO[20] = "";
    char cMD[20] = "";
    char cSigno[5] = "";
    

    printf("\n\nBienvenido a la calculadora de moneda extranjera");
    printf("\n\nIntroduzca la moneda de origen.");
    
    do
    {
        printf("\nPeso(P)");
        printf("\nDolar(D)");
        printf("\nEuro(E)");
        printf("\nReal(R)");
        printf("\nFinalizar el programa(X)\n\n");

        scanf(" %c", &cMonedaOrigen);
    
        switch (cMonedaOrigen)
        {
            case 'P':
                Parar = 1;
                fMoneda1 = Pesos;
                strcat (cMO,"Pesos");
                break;
            
            case 'D':
                Parar = 1;
                fMoneda1 = Dolar;
                strcat (cMO,"Dolares");
                break;

            case 'E':
                Parar = 1;
                fMoneda1 = Euro;
                strcat (cMO,"Euros");
                break;

            case 'R':
                Parar = 1;
                fMoneda1 = Real;
                strcat (cMO,"Reales");
                break;

            case 'X':
                exit(-1);
                break;

            default:
                printf("\n\nPor favor introduzca una opcion valida");
                Parar = 0;
                break;
        }

        
    } while (Parar == 0);

    printf("\n\nIntroduzca la moneda de destino.");
    
    do
    {
    
        printf("\nPeso(P)");
        printf("\nDolar(D)");
        printf("\nEuro(E)");
        printf("\nReal(R)\n\n");
        
        scanf(" %c", &cMonedaDestino);
    
        switch (cMonedaDestino)
        {
            case 'P':
                Parar = 1;
                fMoneda2 = Pesos;
                strcat (cMD,"Pesos");
                strcat (cSigno,"$");
                break;
            
            case 'D':
                Parar = 1;
                fMoneda2 = Dolar;
                strcat (cMD,"Dolares");
                strcat (cSigno,"u$s");
                break;

            case 'E':
                Parar = 1;
                fMoneda2 = Euro;
                strcat (cMD,"Euros");
                strcat (cSigno,"e$");
                break;

            case 'R':
                Parar = 1;
                fMoneda2 = Real;
                strcat (cMD,"Reales");
                strcat (cSigno,"r$");
                break;

            default:
                printf("\n\nPor favor introduzca una opcion valida");
                Parar = 0;
                break;
        }

        
    } while (Parar == 0);

    printf("\n\nIntroduzca el valor a convertir: $");
    scanf("%f",&fCantidad);

    while (fCantidad == 0)
    {
        printf("\n\nEl valor a convertir no puede ser 0, por favor, introduzca un valor valido: $");
        scanf("%f",&fCantidad);

    }
    
    fTotal = (fMoneda1 * fCantidad) / fMoneda2;

    printf("\n\nLa conversion de %s a %s es: %s%.2f", cMO, cMD, cSigno, fTotal);


}