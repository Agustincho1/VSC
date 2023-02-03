#include <stdio.h>
#define Y 3
#define X 7
#define Z 4

void Funcion1(const int M[][X][Z])
{

    for (int k = 0; k < Z; k++)
    {
        for (int j = 0; j < Y; j++)
        {
            for (int x = 0; x < k; x++)
                printf("\t");
            for (int i = 0; i < X; i++)
                printf("\t%i", M[j][i][k]);
            printf("\n");
        }
        printf("\n");
    }
}

void Funcion2(int A[][X][Z])
{
    for (int k = 0; k < Z; k++)
    for (int j = 0; j < Y; j++)
        for (int i = 0; i < X; i++)
            A[j][i][k] = j * X + i + k * Y * X;
}

void main(void)
{

int C[Y][X][Z];

printf("\nComenzando Proceso\n");
Funcion2(C);
Funcion1(C);


}