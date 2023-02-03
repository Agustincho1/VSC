#include <stdio.h>

#define LADO 3

int Victorias1 = 0;
int Victorias2 = 0;
int iTURNOS = 0;
int iBandera = 0;



int GANADOR(int TABLA[LADO][LADO]){

    if (TABLA[0][0] == TABLA[0][1] == TABLA[0][2])
    {
        if (TABLA[0][1] == 'X')
        {
            Victorias1++;
            return Victorias1;
            iBandera = 1;
        }

        if (TABLA[0][1] == 'O')
        {
            Victorias2++;
            return Victorias2;
            iBandera = 2;
        }
        
        iTURNOS = 9;
    }
    
    if (TABLA[1][0] == TABLA[1][1] == TABLA[1][2])
    {
        if (TABLA[1][1] == 'X')
        {
            Victorias1++;
            return Victorias1;
            iBandera = 1;
        }

        if (TABLA[1][1] == 'O')
        {
            Victorias2++;
            return Victorias2;
            iBandera = 2;
        }
        
        iTURNOS = 9;
    }

    if (TABLA[2][0] == TABLA[2][1] == TABLA[2][2])
    {
        if (TABLA[2][1] == 'X')
        {
            Victorias1++;
            return Victorias1;
            iBandera = 1;
        }

        if (TABLA[2][1] == 'O')
        {
            Victorias2++;
            return Victorias2;
            iBandera = 2;
        }
        
        iTURNOS = 9;
    }

    if (TABLA[0][0] == TABLA[1][0] == TABLA[2][0])
    {
        if (TABLA[1][0] == 'X')
        {
            Victorias1++;
            return Victorias1;
            iBandera = 1;
        }

        if (TABLA[1][0] == 'O')
        {
            Victorias2++;
            return Victorias2;
            iBandera = 2;
        }
        
        iTURNOS = 9;
    }

    if (TABLA[0][1] == TABLA[1][1] == TABLA[2][1])
    {
        if (TABLA[1][1] == 'X')
        {
            Victorias1++;
            return Victorias1;
            iBandera = 1;
        }

        if (TABLA[1][1] == 'O')
        {
            Victorias2++;
            return Victorias2;
            iBandera = 2;
        }
        
        iTURNOS = 9;
    }

    if (TABLA[0][2] == TABLA[1][2] == TABLA[2][2])
    {
        if (TABLA[1][2] == 'X')
        {
            Victorias1++;
            return Victorias1;
            iBandera = 1;
        }

        if (TABLA[1][2] == 'O')
        {
            Victorias2++;
            return Victorias2;
            iBandera = 2;
        }
        
        iTURNOS = 9;
    }
    
    if (TABLA[0][0] == TABLA[1][1] == TABLA[2][2])
    {
        if (TABLA[1][1] == 'X')
        {
            Victorias1++;
            return Victorias1;
            iBandera = 1;
        }

        if (TABLA[1][1] == 'O')
        {
            Victorias2++;
            return Victorias2;
            iBandera = 2;
        }
        
        iTURNOS = 9;
    }

    if (TABLA[0][2] == TABLA[1][1] == TABLA[2][0])
    {
        if (TABLA[1][1] == 'X')
        {
            Victorias1++;
            return Victorias1;
            iBandera = 1;
        }

        if (TABLA[1][1] == 'O')
        {
            Victorias2++;
            return Victorias2;
            iBandera = 2;
        }
        
        iTURNOS = 9;
    }
}


void main(){

int iTABLERO[LADO][LADO];
char cPARTIDA;
int i = 0;
int j = 0;




for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        iTABLERO[i][j] = 45;
    }
    
}

printf("\n\nBienvenido al TA-TE-TI en C.");


do
{

    iBandera = 0;
    printf("\n\nDesea iniciar una nueva partida?   Si(S)   No(N)\n\n-");
    scanf(" %c", &cPARTIDA);
    switch (cPARTIDA)
    {
    case 'S': case 's':
        goto NUEVAPARTIDA;
        break;

    case 'N': case 'n':
        goto FINAL;
        break;

    default:
        break;
    }

    NUEVAPARTIDA:
    printf("\n\n\t1\t2\t3\n\n");
    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            printf("1\t");
        }
        
        if (i == 1)
        {
            printf("2\t");
        }
        
        if (i == 2)
        {
            printf("3\t");
        }
        
        for (int j = 0; j < 3; j++)
        {
            printf("%c\t", iTABLERO[i][j]);
        }
        
        printf("\n");

    }

    do
    {
        iTURNOS = 0;

        printf("\n\nJUGADOR 1");
        printf("\n\nElija una fila: ");
        scanf ("%i",&i);
        while (i < 1 || i > 3)
        {
            printf("\n\nPor favor indique un numero de fila valido: ");
            scanf ("%i",&i);
        }
        
        printf("Elija una columna: ");
        scanf ("%i",&j);
        while (j < 1 || j > 3)
        {
            printf("\n\nPor favor indique un numero de columna valido: ");
            scanf ("%i",&j);
        }
        
        do
        {
            if (iTABLERO[i-1][j-1] != '-')
            {
                printf("\nEsa posicion ya se encuentra ocupada, ");
                printf("\nElija una fila: ");
                scanf ("%i",&i);
                
                while (i < 1 || i > 3)
                {
                    printf("\n\nPor favor indique un numero de fila valido: ");
                    scanf ("%i",&i);
                }
                
                printf("Elija una columna: ");
                scanf ("%i",&j);
                
                while (j < 1 || j > 3)
                {
                    printf("\n\nPor favor indique un numero de columna valido: ");
                    scanf ("%i",&j);
                }
        
            }
            
        } while (iTABLERO[i-1][j-1] != '-');
        
        iTABLERO[i-1][j-1] = 'X';

        printf("\n\n\t1\t2\t3\n\n");
        for (int i = 0; i < 3; i++)

        {
            if (i == 0)
            {
                printf("1\t");
            }
            
            if (i == 1)
            {
                printf("2\t");
            }
            
            if (i == 2)
            {
                printf("3\t");
            }
            
            for (int j = 0; j < 3; j++)
            {
                printf("%c\t", iTABLERO[i][j]);
            }
            
            printf("\n");

        }
        
        GANADOR(iTABLERO);

        if (iBandera == 1 || iBandera == 2)
        {
            goto XD;
        }

        iTURNOS++;
        
    //---------------------------------------------------------
    
        printf("\n\nJUGADOR 2");
        printf("\n\nElija una fila: ");
        scanf ("%i",&i);
        while (i < 1 || i > 3)
        {
            printf("\n\nPor favor indique un numero de fila valido: ");
            scanf ("%i",&i);
        }
        
        printf("Elija una columna: ");
        scanf ("%i",&j);
        while (j < 1 || j > 3)
        {
            printf("\n\nPor favor indique un numero de columna valido: ");
            scanf ("%i",&j);
        }
        
        do
        {
            if (iTABLERO[i-1][j-1] != '-')
            {
                printf("\nEsa posicion ya se encuentra ocupada, ");
                printf("\nElija una fila: ");
                scanf ("%i",&i);
                
                while (i < 1 || i > 3)
                {
                    printf("\n\nPor favor indique un numero de fila valido: ");
                    scanf ("%i",&i);
                }
                
                printf("Elija una columna: ");
                scanf ("%i",&j);
                
                while (j < 1 || j > 3)
                {
                    printf("\n\nPor favor indique un numero de columna valido: ");
                    scanf ("%i",&j);
                }
        
            }
            
        } while (iTABLERO[i-1][j-1] != '-');

        iTABLERO[i-1][j-1] = 'O';
        
        printf("\n\n\t1\t2\t3\n\n");
        for (int i = 0; i < 3; i++)
        {
            if (i == 0)
            {
                printf("1\t");
            }
            
            if (i == 1)
            {
                printf("2\t");
            }
            
            if (i == 2)
            {
                printf("3\t");
            }
            
            for (int j = 0; j < 3; j++)
            {
                printf("%c\t", iTABLERO[i][j]);
            }
            
            printf("\n");

        }

        GANADOR(iTABLERO);
        
        if (iBandera == 1 || iBandera == 2)
        {
            goto XD;
        }
        iTURNOS++;

    } while (iTURNOS < 9);

    XD:

    if (iBandera == 1)
    {
        printf("\n\nGana el Jugador 1!!");
    }

    if (iBandera == 2)
    {
        printf("\n\nGana el Jugador 2!!");

    }

    printf("\n\nTotal de victorias:");

    FINAL:
    printf("\n\nJugador 1: %i", Victorias1);
    printf("\n\nJugador 1: %i", Victorias2);

} while (cPARTIDA == 's' || cPARTIDA == 'S');

}