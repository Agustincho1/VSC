/*Ejercicio 7) Matriz de alumnos

Queremos almacenar en un matriz el número de alumnos con que cuenta la Facultad UTN  ordenados en 
función de la carrera y el año de cursada. El programa deberá solicitar al usuario la cantidad de alumnos por Carrera y Año de cursada.
Tenemos 3 carreras (filas): 
Higiene
Matemáticas 
Programación 
y 4 Años de cursadas (columnas):  1ro, 2do, 3ro y 4to.

Al finalizar la carga mostrar el contenido de matriz ingresada al usuario.
Considerar en este caso que deberán mostrarse los encabezados delas filas y las columnas de la siguiente manera:
			    1ro	    2do	    3ro	    4to
Higiene		    7       14      11       4
Matemática    	25      22      8        4
Programación    45      20      0        0   

Luego de la matriz, mostrar al usurio:

Carrera con más alumnos
Año con más alumnos
Total de alumnos de la UTN                                                                                      */

#include <stdio.h>

void Carrera(int Higuiene, int Matematicas, int Programacion){

    if (Higuiene > Matematicas && Higuiene > Programacion)
    {
        printf("\n\nLa carrera con mas alumnos es la de Higuiene");
    }

    if (Matematicas > Higuiene && Matematicas > Programacion)
    {
        printf("\n\nLa carrera con mas alumnos es la de Matematicas");
    }
    
    if (Programacion > Matematicas && Programacion > Higuiene)
    {
        printf("\n\nLa carrera con mas alumnos es la de Programacion");
    }

}

void Anio(int i1ero, int i2do, int i3ero, int i4to){

    if (i1ero > i2do && i1ero > i3ero && i1ero > i4to)
    {
        printf("\n\nEl anio con mas alumnos es 1ero");
    }

    if (i2do > i1ero && i2do > i3ero && i2do > i4to)
    {
        printf("\n\nEl anio con mas alumnos es 2do");
    }

    if (i3ero > i1ero && i3ero > i2do && i3ero > i4to)
    {
        printf("\n\nEl anio con mas alumnos es 3ero");
    }

    if (i4to > i1ero && i4to > i2do && i4to > i3ero)
    {
        printf("\n\nEl anio con mas alumnos es 4to");
    }
}

void main(){

    int iAlumnos[3][4];
    int i;
    int j;
    int iHiguiene = 0;
    int iMatematicas = 0;
    int iProgramacion = 0;
    int i1ero = 0;
    int i2do = 0;
    int i3ero = 0;
    int i4to = 0;
    int iTotal = 0;


    for ( i = 0; i < 3; i++)
    {

        if (i == 0)
        {
            printf("\nIntroduzca la cantidad de alumnos de Higiene por anio: \n");
        }

        if (i == 1)
        {
            printf("\nIntroduzca la cantidad de alumnos de Matematicas por anio: \n");
        }

        if (i == 2)
        {
            printf("\nIntroduzca la cantidad de alumnos de Programacion: \n");
        }

        for ( j = 0; j < 4; j++)
        {
            printf("-");
            scanf("%i",&iAlumnos[i][j]);
            iTotal = iTotal + iAlumnos[i][j];
            
            if (i == 0)
            {
                iHiguiene = iHiguiene + iAlumnos[i][j];
            }

            if (i == 1)
            {
                iMatematicas = iMatematicas + iAlumnos[i][j];
            }

            if (i == 2)
            {
                iProgramacion = iProgramacion + iAlumnos[i][j];
            }
        
        }
        
    }
    
    printf("\n\n");

    printf("\t\t1ero\t\t2do\t\t3ro\t\t4to\n");
    
    for ( i = 0; i < 3; i++)    
    {
        
        if (i == 0)
        {
            printf("Higuiene\t");
        }

        if (i == 1)
        {
            printf("Matematicas\t");
        }

        if (i == 2)
        {
            printf("Programacion\t");
        }
        

        for ( j = 0; j < 4; j++)
        {
            printf("%i\t\t", iAlumnos[i][j]);

        if (j == 0)
        {
            i1ero = i1ero + iAlumnos[i][j];
        }

        if (j == 1)
        {
            i2do = i2do + iAlumnos[i][j];
        }

        if (j == 2)
        {
            i3ero = i3ero + iAlumnos[i][j];
        }

        if (j == 3)
        {
            i4to = i4to + iAlumnos[i][j];
        }

        }
        
        printf("\n");
    }


    Carrera(iHiguiene, iMatematicas, iProgramacion);
    Anio(i1ero,i2do,i3ero,i4to);
    printf("\n\nEl total de alumnos es: %i", iTotal);


    printf("\n\n\n\n");


}
