#include <stdio.h>

int Suma (int numero1, int numero2) 
{
int S;

S = numero1 + numero2;

return S;
}

void Resta (int numero1, int numero2)
{
int Resultado = numero1-numero2;
printf ("\n\nEl valor del resultado es %i", Resultado);
}


void main() 
{

int numero1 = 0;
int numero2 = 0;
int opcion = 0;

printf ("\n\ningrese el primer valor: ");
scanf ("%i", &numero1);
printf ("\n\n");
printf ("ingrese el segundo valor: ");
scanf ("%i", &numero2);
printf ("\n\n");
printf ("si quiere sumar estos numeros marque 1, sino, marque 2 \n\n                        ");
scanf ("%i", &opcion);

int S = Suma(numero1,numero2);

if (opcion == 1)
{
   Suma (numero1, numero2);
   printf ("\n\nEl resultado de la Suma es %i",S);
}

else if (opcion == 2)
{
    Resta (numero1, numero2);
}

else
{
printf ("Valor no valido, por favor introduzca otro");
}

}
