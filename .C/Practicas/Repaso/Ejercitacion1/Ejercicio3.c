/*
Ejercicio 3)
Desarrollar 3 funciones Max, Min y Prom sin parámetros de entrada que muestran el resultado de su operación por pantalla. 
Solicitar en el principal la incorporación al usuario de 3 números decimales validando que sean distintos. Llamar a cada una de las funciones para realizar los cálculos.

Nota: 	Max 🡪 Deberá obtener el MAYOR de los 3 valores
		Min 🡪 Deberá obtener el MENOR de los 3 valores
		Prom 🡪 Deberá obtener el PROMEDIO de los 3 valores       \
*/

#include <stdio.h>

float iNum1 = 0;
float iNum2 = 0;
float iNum3 = 0;

void Max(){

    if (iNum1 > iNum2 && iNum1 > iNum3)
    {
        printf("\n\nEl mayor de los tres numeros es: %.2f", iNum1);
    }

    if (iNum2 > iNum1 && iNum2 > iNum3)
    {
        printf("\n\nEl mayor de los tres numeros es: %.2f", iNum2);
    }

    if (iNum3 > iNum1 && iNum3 > iNum2)
    {
        printf("\n\nEl mayor de los tres numeros es: %.2f", iNum3);
    }

}

void Min(){

    if (iNum1 < iNum2 && iNum1 < iNum3)
    {
        printf("\n\nEl menor de los tres numeros es: %.2f", iNum1);
    }

    if (iNum2 < iNum1 && iNum2 < iNum3)
    {
        printf("\n\nEl menor de los tres numeros es: %.2f", iNum2);
    }

    if (iNum3 < iNum1 && iNum3 < iNum2)
    {
        printf("\n\nEl menor de los tres numeros es: %.2f", iNum3);
    }

}

void Prom(){

    float iPromedio = 0;
    iPromedio = ( (iNum1 + iNum2 + iNum3) / 3 ) ;
    printf("\n\nEl promedio de los tres numeros es %.2f", iPromedio);

}

int main(){

    printf("\n\nIntroduzca el primer numero a calcular: ");
    scanf("%f", &iNum1);

    printf("\n\nIntroduzca el segundo numero a calcular: ");
    scanf("%f", &iNum2);
    
    while (iNum2 == iNum1)
    {
        
        printf("\n\nEl numero ya se encuentra en uso, por favor, introduzca otro: ");
        scanf("%f", &iNum2);

    }

    printf("\n\nIntroduzca el tercer numero a calcular: ");
    scanf("%f", &iNum3);

    while (iNum3 == iNum1 || iNum3 == iNum2)
    {
        printf("\n\nEl numero ya se encuentra en uso, por favor, introduzca otro: ");
        scanf("%f", &iNum3);
    }
    
    Max();
    
    Min();
    
    Prom();

    printf("\n\n");

    return 0;

}
