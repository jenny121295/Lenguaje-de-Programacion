//Programa que resuelve la ecuacion cuadratica ax^2+bx+c
//03/10/2020
//Realizado por Jennifer Guadalupe Valencia Sotelo

#include <stdio.h>

int main()
{
    int a, b, c, r;
    float x1,x2, re, im;

    printf("Este programa resuelve la ecuacion cuadratica ax^2+bx+c.\n");
    printf("Escribe los valores de las variables: \n");
    printf("a:");
    scanf("%d",&a);
    printf("b:");
    scanf("%d",&b);
    printf("c:");
    scanf("%d",&c);

    r= b*b-4*a*c;
// Numeros complejos
    if(r<0){
        r=r*-1;
        re=-b;
        re=re/(2*a); //lo uso debido a que si queiro dividir -b/2*a no realiza la operacion
        im=sqrt(r)/(2*a);
        printf("Las soluciones son:\n");
        printf("X1 es igual a %.2f + %.2fi\n",re ,im);
        printf("X2 es igual a %.2f - %.2fi\n",re ,im);
    }
// Numeros reales
    else{
        x1=(-b+sqrt(r))/(2*a);
        x2=(-b-sqrt(r))/(2*a);
        printf("Las soluciones son:\n");
        printf("X1 es igual a %.2f\n", x1);
        printf("X2 es igual a %.2f\n", x2);
    }
    return 0;
}


