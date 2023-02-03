#include <stdio.h>

float a,b,c = 0;

void Max (float a,float b,float c) {

if (a>b && a>c)
printf ("\n\nEl mayor de los tres valores es: %.2f", a);
    else if (b>a && b>c)
    printf ("\n\nEl mayor de los tres valores es: %.2f", b);
        else
        printf ("\n\nEl mayor de los tres valores es: %.2f", c);
}

void Min (float a,float b,float c)  {

if (a<b && a<c)
printf ("\n\nEl menor de los tres valores es: %.2f", a);
    else if (b<a && b<c)
    printf ("\n\nEl menor de los tres valores es: %.2f", b);
        else
        printf ("\n\nEl menor de los tres valores es: %.2f", c);
}

void Prom (float a,float b,float c)  {
float resultado = (a+b+c)/3;
printf ("\n\nEl promedio de los tres valores es: %.2f \n\n", resultado);
}

void main()
{
printf ("\n\nIntroduzca el primer numero: ");
scanf ("%f", &a);
printf ("\n\nIntroduzca el segundo numero: ");
scanf ("%f", &b);

if (b==a) 
{
    do
    {
        printf ("\n\nEse numero ya se encuentra en uso. Introduzca otro valor.\n\n");
        scanf ("%f", &b);

    } while (a==b);
}

printf ("\n\nIntroduzca el tercer numero: ");
scanf ("%f", &c);

if (c==a)
{

    do
    {
        printf ("\n\nEse numero ya se encuentra en uso. Introduzca otro valor.\n\n");
        scanf ("%f", &c);

    } while (c==a);
}

if (c==b)
{
    do
    {
        printf ("\n\nEse numero ya se encuentra en uso. Introduzca otro valor.\n\n");
        scanf ("%f", &c);
        
    } while (c==b);
    
}

printf ("\n\n\n");
Max (a,b,c);
Min (a,b,c);
Prom (a,b,c);

}