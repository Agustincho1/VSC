/*Ejercicio 1) Concatenar nombres
Escriba el código necesario para solicitar el Nombre y Apellido al usuario validando que ambos tengan contenido.
El resultado del ejercicio será un mensaje al usuario: Su nombres es: [Apellido] , [Nombre]
Para la realización deberán utilizar variables locales y globales en conjunto con la función mostrar variando la cantidad de parámetros que esta reciba.
La función de nombre Mostrar() mostrara el resultado 2 veces por pantalla, un utilizando la función  STRCAT y otro utilizando PRINTF:
Escenarios posibles:
Nombre y Apellido Global, Mostrar() sin parámetros
Nombre Local {main()} y Apellido Global, Mostrar(1 parámetro )
Nombre Local {main()} y Apellido Local {main()}, Mostrar(2 parámetros )                         */

#include <stdio.h>

char cNombre[30];
char cApellido[30];


void Mostrar(){

char cNombreCompleto[40] = "Su nombre es: ";

printf("\n\nSu nombre es: %s , %s",cNombre, cApellido);

strcat (cNombreCompleto, cNombre);
strcat (cNombreCompleto, ", ");
strcat (cNombreCompleto, cApellido);

printf("\n\n%s\n\n", cNombreCompleto);

}

void main(){

printf("\n\nIntroduzca su nombre: ");
scanf("%s",&cNombre);

printf("\nIntroduzca su Apellido: ");
scanf("%s",&cApellido);

Mostrar();

}
