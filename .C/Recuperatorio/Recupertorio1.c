#include <stdio.h>

void main(void)
{

    int MiNumero = 0 ;
    int Continuar = 1;

    printf("\nIngrese numeros enteros del 1 al 10.\n");
    printf("\nPara terminar ingrese culauier numero distinto a estos.\n");

    while (Continuar)
    {
        scanf("%i", &MiNumero);

        switch (MiNumero)
        {
        
        case 1: case 2: case 5: case 7: case 8:
            printf("INGRESO UN NUMERO IMPAR\n");
            ;

        case 3: case 4: case 6: case 9: case 10:
            printf("iNGRESO UN NUMERO PAR\n");
            break;

        default:
            Continuar = 0;
        
        }
    }
    
    printf("\nFIN DEL EJEMPLO.\n");



}