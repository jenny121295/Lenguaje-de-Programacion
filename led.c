//Programa para calcular la resistencia en un circuito de led
//28/09/2020
//Realizado por Jennifer Guadalupe Valencia Sotelo

#include <stdio.h>

int main()
{
    float V, V1, V2, V3, I1, I2, I3, R1, R2, R3;
    V1=2.8;
    V2=3;
    V3=1.5;
    I1=0.02;
    I2=0.02;
    I3=0.015;

    printf("Este programa solo calcula la resistencia de los siguientes tipos de leds:\n");
    printf("1.- Led Blanco.\n");
    printf("2.- Led Verde brillante.\n");
    printf("3.- Led Rojo std.\n");

    printf("Escribe el valor del voltaje de la fuente:");
    scanf("%f",&V);

    R1=(V-V1)/I1;
    R2=(V-V2)/I2;
    R3=(V-V3)/I3;

    printf("La resistencia para el Led Blanco es: %.2f ohms\n",R1);
    printf("La resistencia para el Led Verde brillante es: %.2f ohms\n",R2);
    printf("La resistencia para el Led Rojo std es: %.2f ohms\n",R3);

    return 0;
}

