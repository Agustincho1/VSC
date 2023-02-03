#include <stdio.h>


void main(){

float fAltura[5];
float fPromedio;
float fMenorP ;
float fMayorP ;



int i;

for ( i = 0; i < 5; i++)
{
   
    printf("\n\nIngrese la altura de la persona: ");
    scanf("%f", &fAltura[i]);

}

fPromedio = (fAltura[0] + fAltura[1] + fAltura[2] + fAltura[3] + fAltura[4] ) / 5;

printf("%.2f", fPromedio);



}