/*
Escriba el código necesario para poder calcular áreas de un triángulo equilátero. 
Solicitando al usuario la base y la altura y realizando el cálculo en una función.
Consultar al usuario si desea continuar realizando cálculos por medio de un bucle WHILE                                                     */

#include <stdio.h>

float Area(float Base, float Altura){

    float Area = 0;
    Area = ((Base * Altura) / 2);
    return Area;
}

void main(){

float fBase = 0;
float fAltura = 0;
float fArea = 0;

int ParaloAca = 1;

while (ParaloAca)
{

    printf("\n\nIntroduzca la base de su triangulo: ");
    scanf("%f", &fBase);

    printf("\n\nIntroduzca la altura de su triangulo: ");
    scanf("%f", &fAltura);

    fArea = Area(fBase, fAltura);

    printf("\n\nEl area de su tringulo es: %.2f\n", fArea);

    printf("\n\nSi desea continuar realizando operaciones introduzca un numero distinto de 0:\n\n\t");
    scanf("%i", &ParaloAca);

   
}


}