/*
1)De camino al CUCH decidí pasar por una Verdulería a comprar lo necesario para la semana.

Me acerque al Vendedor informándole que compraría varios productos. El vendedor inicia la venta
preguntando: ¿Qué va a llevar?, a lo que le indico el producto y cantidad deseada en Kg (considerar
que puede ser menos de 1Kg o fracciones), él busca el producto, lo pesa y anota en la grilla de 20
filas de su cuaderno: producto, cantidad y precio.

Para representar la grilla utilice una estructura de productos y ventas.

Luego el vendedor vuelve a consultar: ¿Qué más va a llevar?.  Repitiéndose el proceso hasta
indicarle: (N) nada más.

A fin de simplificar sus anotaciones el vendedor tiene codificada su mercadería con una
letra (#) y para el cierre de la compra (N)

Lista de Productos y Precios por Kg :

(P)Papa : $23 (T) Tomate : $45 (B) Banana : $112 (Z) Zapallo : $89 (M)Manzana : $130
(L) Lechuga : $53 (H) Zanahoria : $180 (C) Cebolla : $19 (J) Ají : $77

Al finalizar mi compra, el Vendedor me Informa la precio TOTAL de la compra realizada y el
Producto más caro(considerando Precio x Cantidad), de haber más de uno con el mismo valor me
indica cuales.                                                                                                                                                          */




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

                // f  c
    float Cuadernillo[20][3];
    int f,c = 0;
    char cProducto;
    float fPrecio = 0;
    int Banderuski = 1;

    printf("\n\n-Eh loco mira que voy a llevar un par de cosa'");
    printf("\n\n+Bueno loco decime que va a lleva?");
    printf("\n\n+Tengo:(P)Papa $23 x KG");
    printf("\n(T)Tomate $45 x KG");
    printf("\n(B)Banana $112 x KG");
    printf("\n(Z)Zapallo $89 x KG");
    printf("\n(M)Manzana $130 x KG");
    printf("\n(L)Lechuga $53 x KG");
    printf("\n(H)Zanahoria $180 x KG");
    printf("\n(C)Cebolla $19 x KG");
    printf("\n(J)Aji $77 x KG");
    printf("\n\n-");


    scanf(" %c", &cProducto);

    switch (cProducto)
    {
    case 'a'|'A':
        fPrecio = Papa;
        break;

    case 't'|'T':
        fPrecio = Tomate;
        break;

    case 'b'|'B':
        fPrecio = Banana;
        break;

    case 'z'|'Z':
        fPrecio = Zapallo;
        break;

    case 'm'|'M':
        fPrecio = Manzana;
        break;

    case 'l'|'L':
        fPrecio = Lechuga;
        break;

    case 'h'|'H':
        fPrecio = Zanahoria;
        break;

    case 'c'|'C':
        fPrecio = Cebolla;
        break;

    case 'j'|'J':
        fPrecio = Aji;
        break;

    default:
        break;
    }

    Cuadernillo[0][0] = fPrecio;

    printf("\n\n+Cuanto va lleva? ");
    printf("\n\n-");
    scanf("%f", &Cuadernillo[0][1]);


    do
    {

        for ( f = 0; f < 20; f++)
        {
            
            for (c = 0; c < 3; c++)
            {
            
                if (c == 0 && f != 0)
                {
                   
                    printf("\n\n+Que ma va a llevar? ");
                    printf("\n\n-");
                
                    scanf(" %c", &cProducto);
                
                    if (cProducto == 70 || cProducto == 110)
                    {
                        Banderuski = 0;
                        break;
                    }
                    

                    switch (cProducto)
                    {
                    case 'a'|'A':
                        Cuadernillo[f][c] = Papa;
                        break;

                    case 't'|'T':
                        Cuadernillo[f][c] = Tomate;
                        break;

                    case 'b'|'B':
                        Cuadernillo[f][c] = Banana;
                        break;

                    case 'z'|'Z':
                        Cuadernillo[f][c] = Zapallo;
                        break;

                    case 'm'|'M':
                        Cuadernillo[f][c] = Manzana;
                        break;

                    case 'l'|'L':
                        Cuadernillo[f][c] = Lechuga;
                        break;

                    case 'h'|'H':
                        Cuadernillo[f][c] = Zanahoria;
                        break;

                    case 'c'|'C':
                        Cuadernillo[f][c] = Cebolla;
                        break;

                    case 'j'|'J':
                        Cuadernillo[f][c] = Aji;
                        break;

                    default:
                        break;
                    }
                }

            if (c == 1 && f != 0)
            {
                printf("\n\n+Cuanto va lleva?");
                scanf("%f", &Cuadernillo[f][c]);
            }
            
            }
            
        }

    } while (Banderuski == 1);

}

