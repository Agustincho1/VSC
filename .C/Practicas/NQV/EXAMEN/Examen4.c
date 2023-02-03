#include <stdio.h>

const int Papa = 23;
const int Tomate = 45;
const int Banana = 112;
const int Zapallo = 89;
const int Manzana = 130;
const int Lechuga = 53;
const int Zanahoria = 180;
const int Cebolla = 19;
const int Aji = 77;




void main(){

    int i;
    int j;
    
    float fCuadernoDeVentas[20][3];
    int iParar = 1;

    float fAuxiliar1 = 0;
    float fAuxiliar2 = 0;

    int iCantidadDeProd = 0;

    while (iParar)
    {

        for (i = 0; i < 20; i++)
        {
            
            fAuxiliar1 = 0;
            fAuxiliar2 = 0;

            if (i==0)
            {
                
                printf("\n\nQue va a llevar?\n");
            
            }
            
            for (j = 0; j < 3; j++)
            {
                
                if (j==0 && i==0)
                {
                    scanf(" %c", &fCuadernoDeVentas[i][j]);
                    fAuxiliar1 = fCuadernoDeVentas[i][j];
                }

                if (j==0 && i!=0)
                {
                    printf("\n\nQue mas va a llevar?\n");
                    scanf(" %c", &fCuadernoDeVentas[i][j]);
                    fAuxiliar1 = fCuadernoDeVentas[i][j];
                    
                    if (fCuadernoDeVentas[i][j]==78)
                    {
                        iParar = 0;
                    }
                }

                if (j==1)
                {
                    printf("\n\nQue cantidad en KG desea?\n");
                    scanf("%f", &fCuadernoDeVentas[i][j]);
                    fAuxiliar2 = fCuadernoDeVentas[i][j];
                }

                if (j==2)
                {
                    fCuadernoDeVentas[i][j] = (fAuxiliar1*fAuxiliar2);
                }
            }
            
            iCantidadDeProd++;
        }
    
    }
        
printf("\n\nProducto\tKg\t$");

for ( i = 0; i <= iCantidadDeProd; i++)
{
    for ( j = 0; i < 3; i++)
    {
        printf("%.2f\t", fCuadernoDeVentas[i][j]);
    }
    
}

//No puedo hacer que finalize el bucle

}