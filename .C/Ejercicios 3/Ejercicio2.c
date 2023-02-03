#include <stdio.h>

/*Escriba el código necesario para que se solicite al usuario: una letra entre la “B” y la “F” 
y un sentido “>” (mayores) o “<” (menores) para mostrar por pantalla las 5 letras posteriores 
o anteriores a la ingresada dependiendo el sentido solicitado.*/


main(){

char cLetra;
char cMoM;
int iParar;
int i = 60;
int x = 62;
int iBucle = 0;

printf("\n\nIntroduzca una letra entre la B y la F: "); //66 Y 70
scanf(" %c", &cLetra);

while (cLetra<66 || cLetra>70)
{
    printf("\n\nPor favor, introduzca una letra entre la B y la F: ");
    scanf(" %c", &cLetra);
}

printf("\n\nIntroduzca un sentido\n%c (menores) o %c (mayores): ",i,x);
scanf(" %c", &cMoM);
printf("\n");

if (cMoM == i)
{
    iParar = cLetra-5;
    for (cLetra; cLetra >= iParar; --cLetra)
    {
        
        printf("\n%c",cLetra);

        if (cLetra == 65)
        {
            exit(-1);
        }
        
    }
    
}

if (cMoM == x)
{
    iParar = cLetra+5;
    for (cLetra; cLetra <= iParar; ++cLetra)
    {
        
        printf("\n%c",cLetra);
    }
}

}