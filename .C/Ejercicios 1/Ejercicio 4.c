#include <stdio.h>


void Area (float base, float altura)
{
float Resultado = (base*altura)/2;

printf("\n\nEl area del triangulo es: %.2f", Resultado) ;

}


void main()
{
float base;
float altura;
int opcion = 1;

while (opcion==1)
{
    printf ("\n\nIntruzca la base del triangulo: ");
scanf ("%f", &base);
printf ("\n\nIntruzca la altura del triangulo: ");
scanf ("%f", &altura);

Area (base,altura);

printf("\n\n\nSi desea seguir realizando operaciones marque 1, sino presione 2\n\n                                ");
scanf ("%i",&opcion);

}


}