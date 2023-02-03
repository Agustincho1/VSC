#include <stdio.h>

/*
Ejercicio 4) Promedios y Aprobados del curso

Ingresar 20 notas entre 1 y 10 correspondientes a las calificaciones de los alumnos en un vector.

Se consideran que según la nota la condición de los alumnos es:
4 o menos 	🡪 RECURSA
5 a 7 	🡪 EXAMEN FINAL
8 o más 	🡪 PROMOCIÓN

De los datos ingresados obtener:
a)  El promedio total del curso
b)  Cantidad y promedio de los alumnos que recursan, promocionan y van a examen final.
*/

void main(){

float fAlumnos[20];
int i;
int iPromedio1 = 0;
float fPromedioRecursan;
int iPromedio2 = 0;
float fPromedioFinal;
int iPromedio3 = 0;
float fPromedioPromocionan;
float iPromedioTotal = 0;

printf("\n\nA continuacion introduzca la nota de los alumnos:\n\n");

for (i = 0; i < 20; i++)
{
    printf("- ");
    scanf("%f", &fAlumnos[i]);

    while (fAlumnos[i]<1 || fAlumnos[i]>10)
    {
        printf("\nLa nota debe estar entre 1 y 10, por favor, introduzca una nota valida\n\n");
        printf("- ");
        scanf("%f", &fAlumnos[i]);

    }
    
    iPromedioTotal = (iPromedioTotal + fAlumnos[i]);

    if (fAlumnos[i]<=4)
    {
        iPromedio1++;
        fPromedioRecursan = fPromedioRecursan + fAlumnos[i];
    }
    
    if (fAlumnos[i]>=5 && fAlumnos[i]<=7)
    {
        iPromedio2++;
        fPromedioFinal = fPromedioFinal + fAlumnos[i];
    }


    if (fAlumnos[i]>=8 && fAlumnos[i]<=10)
    {
        iPromedio3++;
        fPromedioPromocionan = fPromedioPromocionan + fAlumnos[i];
    }
    
}

iPromedioTotal = (iPromedioTotal/20);

printf("\n\nEl promedio total del curso es: %.2f", iPromedioTotal);

fPromedioRecursan = (fPromedioRecursan / iPromedio1);
fPromedioFinal = (fPromedioFinal / iPromedio2);
fPromedioPromocionan = (fPromedioPromocionan / iPromedio3);



printf("\n\nLos alumnos que recursan son %i y el promedio de estos es %.2f", iPromedio1, fPromedioRecursan);
printf("\n\nLos alumnos que van a examen final son %i y el promedio de estos es %.2f", iPromedio2, fPromedioFinal);
printf("\n\nLos alumnos que promocionan son %i y el promedio de estos es %.2f\n\n", iPromedio3, fPromedioPromocionan);


}