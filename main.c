//Programa para calcular las corrientes y voltajes de cada resistencia en un circuito en paralelo
//28/09/2020
//Realizado por Jennifer Guadalupe Valencia Sotelo

#include <stdio.h>

int main()
{
    float Vs, I1, I2, I3;
    int R1, R2, R3;

    printf("Escribe el valor de la fuente:");
    scanf("%f",&Vs);
    printf("Resistencia 1:");
    scanf("%d",&R1);
    printf("Resistencia 2:");
    scanf("%d",&R2);
    printf("Resistencia 3:");
    scanf("%d",&R3);

    printf("Al ser un circuito en paralelo el voltaje de la fuente es el mismo para cada una de las resistencias\n");
    printf("V1=%.2fv\n",Vs);
    printf("V2=%.2fv\n",Vs);
    printf("V3=%.2fv\n",Vs);

    printf("El valor de las corrientes es:\n");
    printf("I1=%.2fA\n",Vs/R1);
    printf("I2=%.2fA\n",Vs/R2);
    printf("I3=%.2fA\n",Vs/R3);
    return 0;
}
