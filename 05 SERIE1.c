//Programa que resuelve el ejemplo de la primera serie de la formula N^2-2i, desde 0 hasta N
//11/10/2020
//Realizado por Jennifer Guadalupe Valencia Sotelo

#include <stdio.h>

int main()
{
    int N, i=0,x;

    printf("Este programa da la serie de la formula N^2-2i, desde 0 hasta N.\n");
    printf("Escribe el valor de N:");
    scanf("%d",&N);

    printf("Los valores de tu serie son:");

    while(i<=N)
    {
        x = N*N-2*i;
        printf("%d\t",x);
        i=i+1;
    }
    return 0;
}


