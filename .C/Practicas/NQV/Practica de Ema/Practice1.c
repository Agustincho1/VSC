#include <stdio.h>
#include <conio.h>

void main(){

float fSueldos[5];

int i;

for ( i = 0; i < 5; i++)
{
    printf("\n\nIngrese el monto del sueldo: $");
    scanf("%f", &fSueldos[i]);


}

printf("\n\n\n\n\nLista de sueldos:\n\n");

for ( i = 0; i < 5; i++)
{
    printf("    $");
    printf("%.2f", fSueldos[i]);
    printf("\n");
}

getch();

}