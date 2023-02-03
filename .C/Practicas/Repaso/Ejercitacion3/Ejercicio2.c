/*
Ejercicio 2) Letras mayores o menores 

Escriba el código necesario para que se solicite al usuario: una letra entre la “B” y la “F” y un sentido “>” (mayores) o “<” (menores) 
para mostrar por pantalla las 5 letras posteriores o anteriores a la ingresada dependiendo el sentido solicitado.                                         */

#include <stdio.h>

void main(){

    char cLetra;
    char cSentido;
    int ParaloAca = 1;
    int iAuxiliar = 0;

    printf("\n\nIntroduzca un letra entre la B y la F: ");
    scanf(" %c", &cLetra);

    while (cLetra<66 || cLetra>70)
    {
        printf("\n\nPor favor asegurese de que la letra a ingresar este entre la B y la F\n\n");
        scanf(" %c", &cLetra);
    }
     
    int iMenor = 60;
    int iMayor = 62;

    printf("\nIntroduzca el sentido: %c(Menor) o %c(Mayor): ", iMenor ,iMayor);
    scanf(" %c", &cSentido);

    iAuxiliar = cLetra;

    do
    {

        if (ParaloAca == 0)
        {
            scanf(" %c", &cSentido);
        }
        

        switch (cSentido)
        {
        case 60: //menor
            
            for ( cLetra ; cLetra > (iAuxiliar-5) ; cLetra--)
            {
                
                if (cLetra == 66)
                {
                    exit(1);
                }
                
                printf("\n-%c", (cLetra-1));

            }
            ParaloAca = 1;

            break;

        case 62: //mayor
            for ( cLetra ; cLetra < (iAuxiliar+5) ; cLetra++)
            {
                printf("\n-%c", (cLetra+1));
                

            }
            ParaloAca = 1;
            
            break;
            

        default:

            printf("\n\nPor favor introduzca una opcion correcta: ");
            ParaloAca = 0;
            break;
        }
    
    } while (ParaloAca == 0);


    printf("\n\n\n");

}
