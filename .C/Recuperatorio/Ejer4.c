#include <stdio.h>

const int L = 3, W = 7, D = 4;

void Funcion1(const int A[])
{
    for (int P = 0; P < D; P++)
    {
        for (int M = 0; M < L; M++)
        {
            for (int b = 0; b < P; b++) printf("\t");
                for (int C = 0; C < W; C++)
                    printf("\t%i", A[M*W+C+P*L*W]);
                printf("\n");   
        }
        printf("\n");   
    }
}

void main(void)
{
    int M[L*W*D];

    printf("\nComenzando Proceso\n");
    for (int P = 0; P < (L*W*D); P++)
        M[P] = P;
    Funcion1(M);
    
}