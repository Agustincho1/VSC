#include <stdio.h>

/*Matriz de alumnos

Queremos almacenar en un matriz el número de alumnos con que cuenta la Facultad UTN  ordenados en 
función de la carrera y el año de cursada. El programa deberá solicitar al usuario la cantidad de alumnos por Carrera y Año de cursada.
Tenemos 3 carreras (filas): 
    -Higiene
    -Matemáticas 
    -Programación 
y 4 Años de cursadas (columnas): 1ro, 2do, 3ro y 4to.
Al finalizar la carga mostrar el contenido de matriz ingresada al usuario.

Considerar en este caso que deberán mostrarse los encabezados delas filas y las columnas de la siguiente manera:
			    1ro	        2do	        3ro	        4to
Higiene		    7           14      	11      	4
Matemática    	25          22      	8       	4
Programación    45          20      	0       	0   

Luego de la matriz, mostrar al usurio:
    -Carrera con más alumnos
    -Año con más alumnos
    -Total de alumnos de la UTN                          */

void main(){

int iMatriz [4] [5];
int iFilas;
int iColumnas;
int enie= 164;

iMatriz [1] [0] = 'Higiene';
iMatriz [2] [0] = 'Matematica';
iMatriz [3] [0] = 'Programacion';
iMatriz [0] [1] = '1ro';
iMatriz [0] [2] = '2do';
iMatriz [1] [3] = '3ro';
iMatriz [1] [4] = '4to';

printf("\n\nIngrese las notas de la carrera Higiene por a%co de cursada en orden ascendente:\n", enie);
for ( iFilas = 1; iFilas < 2; iFilas++)
{
    for (iColumnas = 1; iColumnas < 5; iColumnas++)
    {       
        printf("\t");
        scanf("%i", &iMatriz[iFilas][iColumnas]);
    }
    
}

printf("\n\nIngrese las notas de la carrera Matematica por a%Co de cursada en orden ascendente:\n", enie);
for ( iFilas = 2; iFilas < 3; iFilas++)
{
    for (iColumnas = 1; iColumnas < 5; iColumnas++)
    {
        printf("\t");
        scanf("%i", &iMatriz[iFilas][iColumnas]);
    }
    
}

printf("\n\nIngrese las notas de la carrera Programacion por a%Co de cursada en orden ascendente:\n", enie);
for ( iFilas = 3; iFilas < 4; iFilas++)
{
    for (iColumnas = 1; iColumnas < 5; iColumnas++)
    {   
        printf("\t");
        scanf("%i", &iMatriz[iFilas][iColumnas]);
    }
    
}

for ( iFilas = 0; iFilas < 4; iFilas++)
{
    for (iColumnas = 0; iColumnas < 5; iColumnas++)
    {
        if (iColumnas == 0)
        {
                printf("%s\t",iMatriz[iFilas] [iColumnas]);
        }
        
        if (iFilas == 0)
        {
                printf("%s\t",iMatriz[iFilas] [iColumnas]);
        }

        if (iColumnas > 0)
        {
            if (iFilas > 0)
            {
                printf("%i\t",iMatriz[iFilas] [iColumnas]);
            }
        }
        
    }
    
    printf("\n\n");
}








}
