/*
1) – De camino al CUCH decidí pasar por una Verdulería a comprar lo
necesario para la semana.
Me acerque al Vendedor informándole que compraría varios productos. El vendedor inicia la
venta preguntando: ¿Qué va a llevar?, a lo que le indico el producto y cantidad deseada en Kg
(considerar que puede ser menos de 1Kg o fracciones), él busca el producto, lo pesa y anota
en la grilla de 20 filas de su cuaderno: producto, cantidad y precio.
Para representar la grilla utilice una estructura de productos y ventas.
Luego el vendedor vuelve a consultar: ¿Qué más va a llevar?. Repitiéndose el proceso hasta
indicarle: (N) nada más.
A fin de simplificar sus anotaciones el vendedor tiene codificada su mercadería con una letra
(#) y para el cierre de la compra (N)
Lista de Productos y Precios por Kg:
(P) Papa : $23
(T) Tomate: $45
(B) Banana: $112
(Z) Zapallo: $89
(M) Manzana: $130
(L) Lechuga: $53
(H) Zanahoria: $180
(C) Cebolla: $19
(J) Ají: $77

Al finalizar mi compra, el Vendedor me Informa la precio TOTAL de la compra realizada y el
Producto más caro (considerando Precio x Cantidad), de haber más de uno con el mismo valor
me indica cuales.                                                                                   */

#include <stdio.h>

#define LARGO_ARREGLO 20

const int Papa = 23;
const int Tomate = 45;
const int Banana = 112;
const int Zapallo = 89;
const int Manzana = 130;
const int Lechuga = 53;
const int Zanahoria = 180;
const int Cebolla = 19;
const int Aji = 77;


struct Verduleria
{
    char Verdura;
    float Cantidad;
    float Total;
    float Valor;
};

void main(){

    struct Verduleria Grilla[LARGO_ARREGLO];
    int iContador = 1;
    int Flag1 = 0;
    int Flag2 = 0;
    float fTotalDeLaCompra;
    char cMayor;

    printf("\n\n-Eh loco mira que voy a llevar un par de cosas");
    printf("\n\n+Bueno loco decime que va a lleva?");
    printf("\nTe digo lo que tengo:\n(P)Papa $23 x KG");
    printf("\n(T)Tomate $45 x KG");
    printf("\n(B)Banana $112 x KG");
    printf("\n(Z)Zapallo $89 x KG");
    printf("\n(M)Manzana $130 x KG");
    printf("\n(L)Lechuga $53 x KG");
    printf("\n(H)Zanahoria $180 x KG");
    printf("\n(C)Cebolla $19 x KG");
    printf("\n(J)Aji $77 x KG");
    printf("\n\n-");

    scanf("%c", &Grilla[0].Verdura);


    do
    {
        Flag1 = 0;
        
        switch (Grilla[0].Verdura)
        {
            case 'P': case'p':
                Grilla[0].Valor = Papa;
                break;

            case 't': case'T':
                Grilla[0].Valor = Tomate;
                break;

            case 'b': case'B':
                Grilla[0].Valor = Banana;
                break;

            case 'z': case'Z':
                Grilla[0].Valor = Zapallo;
                break;

            case 'm': case'M':
                Grilla[0].Valor = Manzana;
                break;

            case 'l': case'L':
                Grilla[0].Valor = Lechuga;
                break;

            case 'h': case'H':
                Grilla[0].Valor = Zanahoria;
                break;

            case 'c': case'C':
                Grilla[0].Valor= Cebolla;
                break;

            case 'j': case'J':
                Grilla[0].Valor = Aji;
                break;

            default:
                Flag1 = 1;
                printf("\n\n+Disculpame no me quedo mas. Otra cosa?\n\n-");
                scanf(" %c", &Grilla[0].Verdura);
            
            break;
        }

        
    } while (Flag1);

    printf("\n\n+Cuanto queres? ");
    printf("\n\n-");
    scanf("%f", &Grilla[0].Cantidad);

    Grilla[0].Total = (Grilla[0].Valor * Grilla[0].Cantidad);

    for (int i = 1; i < 20; i++)
    {

        Flag2 = 0;

        printf("\n\n+Que mas vas a llevar? ");
                    
        printf("\n\n-");
                
        scanf(" %c", &Grilla[i].Verdura);

        do
        {
        
            switch (Grilla[i].Verdura)
            {
                case 'p': case'P':
                    Grilla[i].Valor = Papa;
                    break;

                case 't': case'T':
                    Grilla[i].Valor = Tomate;
                    break;

                case 'b': case'B':
                    Grilla[i].Valor = Banana;
                    break;

                case 'z': case'Z':
                    Grilla[i].Valor = Zapallo;
                    break;

                case 'm': case'M':
                    Grilla[i].Valor = Manzana;
                    break;

                case 'l': case'L':
                    Grilla[i].Valor = Lechuga;
                    break;

                case 'h': case'H':
                    Grilla[i].Valor = Zanahoria;
                    break;

                case 'c': case'C':
                    Grilla[i].Valor = Cebolla;
                    break;

                case 'j': case'J':
                    Grilla[i].Valor = Aji;
                    break;

                case 'n': case'N':
                    printf("\n-Nada mas, decime cuanto es.\n\n");
                    goto SALIR;

                default:
                    Flag2 = 1;
                    printf("\n\nDisculpame no me quedo mas. Otra cosa?\n\n-");
                    scanf(" %c", &Grilla[i].Verdura);
                    break;
            }

        }while (Flag2);
       

        printf("\n\n+Cuanto vas lleva? ");   
        
        scanf("%f", &Grilla[i].Cantidad);

        Grilla[i].Total = (Grilla[i].Verdura * Grilla[i].Cantidad);

        iContador++;
    }

    SALIR:

    printf("\nPRODUCTO\tKG\t\t  $\n");

    for (int i = 0; i < iContador; i++)
    {
        printf("%c\t\t%.2f\t\t%.2f", Grilla[i].Verdura , Grilla[i].Cantidad, Grilla[i].Total);
        
        printf("\n\n");
    }
    
    for (int i = 0; i < iContador; i++)
    {
        fTotalDeLaCompra = fTotalDeLaCompra + Grilla[i].Total;
    }
    
    cMayor = Grilla[0].Verdura;

    for (int i = 1; i < iContador; i++)
    {
        
        if (Grilla[i].Total > Grilla[i-1].Total)
        {
            cMayor = Grilla[i].Verdura;
        }
        
    }
    
    printf("El total de la compra es: $%.2f", fTotalDeLaCompra);
    
    printf("\n\nEl producto mas caro es: %c", cMayor);

    printf("\n\n\n");

}

