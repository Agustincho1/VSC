#include <stdio.h>

char Nombre[30];
char Apellido[30];

Mostrar(){

char NombreCompleto[30] = "";

printf ("\n\nSu nombre es: %s, %s" , Nombre , Apellido);

strcat (NombreCompleto, Nombre);
strcat (NombreCompleto, ", ");
strcat (NombreCompleto, Apellido);
printf ("\n\n\nSu nombre es: %s\n\n" , NombreCompleto);
}


main(){
printf("\n\nIntroduzca su nombre: ");
scanf("%s", &Nombre);
printf("\n\nIntroduzca su apellido: ");
scanf("%s", &Apellido);

Mostrar();

}