#include <stdio.h>

int i;

void For(i){
for (i = 1; i <= 100; i++)
{
    printf ("\n\n%i",i);

}
}


void While(i){

i=1;

while (i<=100)
{
    printf ("\n\n%i",i);
    i = i+1;
}
}


void Dowhile(i){

i=1;

do
{
    printf ("\n\n%i",i);
    i = i+1;
} while (i<=100);

}




void main()
{
char Opcion;

printf("\n\nSeleccione con que bucle desea realizar la operacion:");
printf("\nFor(F)");
printf("\nWhile(W)");
printf("\nDo While(D)");
printf("\n\nO presione X si desea finalizar el programa\n\n                                       ");
scanf("%c",&Opcion);

switch (Opcion)
{
    case 'F':
    For(i);
    break;

    case 'W':
    While(i);
    break;

    case 'D':
    Dowhile(i);
    break;

    case 'X':
    break;

}

}
