/*- Desarrolle una estructura que guarde los datos de los 80 alumnos de la materia
programación en Lenguaje C, y los muestres por pantalla, la estructura debe tener
(documento, nombre, apellido, edad, profesión, lugar de nacimiento, dirección y teléfono).*/

#include <stdio.h>

struct DatosAlumnos
{
    int Documento;
    char Nombre[20];
    char Apellido[20];
    int Edad;
    char Profesion[20];
    char LugarNacimiento[30];
    char Calle[20];
    int Telefono;
};



void main(){


    struct DatosAlumnos Programacion[80];

    for (int i = 0; i < 80; i++)
    {
        
        printf("\n\nIntroduzca su Documento: ");
        scanf("%d",&Programacion[i].Documento);
        
        printf("\n\nIntroduzca su Nombre: ");
        scanf("%s",&Programacion[i].Nombre);
        
        printf("\n\nIntroduzca su Apellido: ");
        scanf("%s",&Programacion[i].Apellido);
        
        printf("\n\nIntroduzca su Edad: "); 
        scanf("%d",&Programacion[i].Edad);
    
        printf("\n\nIntroduzca su Profesion: ");
        scanf("%s",&Programacion[i].Profesion);
    
        printf("\n\nIntroduzca su Lugar de Nacimiento: ");
        scanf("%s",&Programacion[i].LugarNacimiento);
        
        printf("\n\nIntroduzca su Calle: ");
        scanf("%s",&Programacion[i].Calle);
        
        printf("\n\nIntroduzca su Telefono: ");
        scanf("%d",&Programacion[i].Telefono);
        
    }

    printf("\n\n\n\n");

    for (int i = 0; i < 80; i++)
    {
        
        printf("\n\nDocumento: %d", Programacion[i].Documento);
        
        printf("\n\nNombre: %s", Programacion[i].Nombre);
        
        printf("\n\nApellido: %s", Programacion[i].Apellido);

        printf("\n\nEdad: %d", Programacion[i].Edad); 
    
        printf("\n\nProfesion: %s", Programacion[i].Profesion);
    
        printf("\n\nLugar de Nacimiento: %s", Programacion[i].LugarNacimiento);
    
        printf("\n\nCalle: %s", Programacion[i].Calle);
        
        printf("\n\nTelefono: %d", Programacion[i].Telefono);

        printf("\n\n\n\n\n\n\n");

    }




}


