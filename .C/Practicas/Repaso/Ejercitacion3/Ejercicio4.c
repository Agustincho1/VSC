/*
Ejercicio 4) Promedios y Aprobados del curso

Ingresar 20 notas entre 1 y 10 correspondientes a las calificaciones de los alumnos en un vector.

Se consideran que según la nota la condición de los alumnos es:
4 o menos 	🡪 RECURSA
5 a 7 	🡪 EXAMEN FINAL
8 o más 	🡪 PROMOCIÓN

De los datos ingresados obtener:
El promedio total del curso
Cantidad y promedio de los alumnos que recursan, promocionan y van a examen final.                                          */

#include <stdio.h>

void main(){

    float fNotas[20];
    
    float fRecursan = 0;
    int iCantR = 0;
    
    float fFinal = 0;
    int iCantF = 0;
    
    float fPromocion = 0;
    int iCantP = 0;

    float fPromedio = 0;


    printf("\n\nA continuacion ingrese la nota de los alumnos:\n");

    for(int i = 0 ; i < 20; i++)
    {
        
        printf("-");
        scanf("%f",&fNotas[i]);

        while (fNotas[i]<1 || fNotas[i]>10)
        {
            printf("\n\nPor favor asegurese de que la nota ingresada este entre 1 y 10:");
            printf("\n-");
            scanf("%f",&fNotas[i]);
        }

        if (fNotas[i]<5)
        {
            iCantR++;
            fRecursan = fRecursan + fNotas[i];
        }

        if (fNotas[i]>4 && fNotas[i]<8)
        {
            iCantF++;
            fFinal = fFinal + fNotas[i];
        }

        if (fNotas[i]>7)
        {
            iCantP++;
            fPromocion = fPromocion + fNotas[i];
        }

        fPromedio = fPromedio + fNotas[i];

    }

    printf("\n\nEl promedio total del curso es: %.2f", (fPromedio/20));

    printf("\n\nLa cantidad de alumnos que recursan es %i y su promedio es %.2f", iCantR , (fRecursan/iCantR));

    printf("\n\nLa cantidad de alumnos que van a final es %i y su promedio es %.2f", iCantP , (fFinal/iCantP));

    printf("\n\nLa cantidad de alumnos que promocionan es %i y su promedio es %.2f", iCantF , (fPromocion/iCantF));


    printf("\n\n\n");



}