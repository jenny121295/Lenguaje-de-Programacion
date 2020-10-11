//Programa que resuelve el ejemplo de la primera serie de la formula 3N+2i, desde 0 hasta 2N+1
//11/10/2020
//Realizado por Jennifer Guadalupe Valencia Sotelo

#include <stdio.h>

int main()
{
    int N, i=0,a,b;

    printf("Este programa da la serie de la formula 3N+2i, desde 0 hasta 2N+1.\n");
    printf("Escribe el valor de N:");
    scanf("%d",&N);

    a=2*N+1;

    printf("Los valores de tu serie son:");

    while(i<=a)
    {
        b = 3*N+2*i;
        printf("%d\t",b);
        i=i+1;
    }
    return 0;
}



