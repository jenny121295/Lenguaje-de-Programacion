//Programa para calcular el promedio de 3 calificaciones dadas en letra
//03/10/2020
//Realizado por Jennifer Guadalupe Valencia Sotelo

#include <stdio.h>

int main()
{
    char  c1,c2,c3;
    float prom, CT=0;

    printf("Escribe las 3 calificaciones en letras:\n");
    printf("Calificacion 1:");
    scanf("%c",&c1);
    fflush( stdin );
    printf("Calificacion 2:");
    scanf("%c",&c2);
    fflush( stdin );
    printf("Calificacion 3:");
    scanf("%c",&c3);

//Ejecucion de calificacion 1

    if (c1=='A'||c1=='a'){
        CT=CT+10;
    }
    else if(c1=='B'||c1=='b'){
        CT=CT+9;
    }
    else if(c1=='C'||c1=='c'){
        CT=CT+8;
    }
    else if(c1=='D'||c1=='d'){
        CT=CT+7;
    }
    else if(c1=='E'||c1=='e'){
        CT=CT+6;
    }
    else {
        CT=CT+5;
    }

//Ejecucion de calificacion 2

    if (c2=='A'||c2=='a'){
         CT=CT+10;
    }
    else if(c2=='B'||c2=='b'){
         CT=CT+9;
    }
    else if(c2=='C'||c2=='c'){
         CT=CT+8;
    }
    else if(c2=='D'||c2=='d'){
         CT=CT+7;
    }
    else if(c2=='E'||c2=='e'){
         CT=CT+6;
    }
    else {
        CT=CT+5;
    }

//Ejecucion de calificacion 3

if (c3=='A'||c3=='a'){
        CT=CT+10;
    }
    else if(c3=='B'||c3=='b'){
        CT=CT+9;
    }
    else if(c3=='C'||c3=='c'){
        CT=CT+8;
    }
    else if(c3=='D'||c3=='d'){
        CT=CT+7;
    }
    else if(c3=='E'||c3=='e'){
        CT=CT+6;
    }
    else {
        CT=CT+5;
    }

printf("Tu promedio es %.2f",CT/3);
    return 0;
}


