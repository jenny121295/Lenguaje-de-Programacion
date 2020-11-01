//Menu de Programas
//31/Octubre/2020
//Realizado por Jennifer Guadalupe Valencia Sotelo

#include<stdio.h>

int main(){
int opc=1;
//Las variables son inicializadas en cada opcion, debido a que si no se hace esto al regreso al menu
// los valores de las variable se quedan actializados lo que generaria otra salida diferente en los programas

while(opc!=4)
{
    printf("******* MENU *******\n");
    printf("Selecciona alguna opcion:");
    printf("\n1.- Impresion de Triangulos.\n2.- Valor de Pi.\n3.- Secuencias.\n");
    scanf("%d",&opc);

    if(opc==1)
    {
        int naa=1;//numero de asteriscos figura a
        int nab=10;//numero de asteriscos en figura b
        int nac=10;//numero de asteriscos en figura c
        int nad=1;//numero de asteriscos en figura c
        int nec=0;//numero de espacios en figura c
        int ned=9;//numero de espacios en figura d
        system ("cls"); //Limpiara pantalla al elegir la opcion en el menu
        printf("********** IMPRESION DE TRIANGULOS **********\n");
        printf("a)\n");
            for(int r=1;r<=10;r++){ //for de renglones
                for(int a=1;a<=naa;a++){ //for de asteriscos
                    printf("*");
                }
                printf("\n");
                naa=naa+1;
            }
        printf("\nb)\n");
            for(int r=1;r<=10;r++){//for de renglones
                for(int a=1;a<=nab;a++){ //for de asteriscos
                    printf("*");
                }
                printf("\n");
                nab=nab-1;
            }
        printf("\nc)\n");
            for(int r=1;r<=10;r++){//for de renglones
                for (int e=1;e<=nec;e++){ //for de espacios
                    printf(" ");
                }
                for(int a=1;a<=nac;a++){ //for de asteriscos
                    printf("*");
                }
                printf("\n");
                nac=nac-1;
                nec=nec+1;
            }
        printf("\nd)\n");
            for(int r=1;r<=10;r++){//for de renglones
                for (int e=1;e<=ned;e++){ // for de espacios
                    printf(" ");
                }
                for(int a=1;a<=nad;a++){ //for de asteriscos
                    printf("*");
                }
                printf("\n");
                nad=nad+1;
                ned=ned-1;
            }
         printf("Presiona ENTER para regresar al menu.");
    }
    else if(opc==2)
    {
        float d=1;//Variable para el valor del denominador
        int s=1; //Variable para el cambio de signo
        int n;//Variable para el valor que ingresa el usuario
        float pi=0; //Variable para el valor de  pi
        system("cls");//Limpiara pantalla al elegir la opcion en el menu
        printf("********** Valor de PI **********\n");
        printf("Ingresa cuantos terminos de la serie quieres usar:");
        scanf("%d",&n);
        for(int i=1; i<=n;i++){
                pi=pi+s*(4/d);
                d=d+2;
                s=(-1)*s;
        }
        printf("El valor de PI es igual a %f.\n",pi);
        printf("Presiona ENTER para regresar al menu.");
    }
    else if(opc==3)
    {
        int N;//Valiable para el valor que ingresa el usuario
        int a=1;//Valor inicial serie a)
        int b=2;//Valor inicial serie b)
        int c=30;//Valor inicial serie c)
        int ds=15;//Valor inicial serie d)
        system("cls");//Limpiara pantalla al elegir la opcion en el menu
        printf("********** SECUENCIAS **********\n");
        printf("Ingrese el numero de valores que desea usar:");
        scanf("%d",&N);
        printf("a) ");
        for(int i=1;i<=N;i++){
            printf("%d ",a);
            a=a+2;
        }
        printf("\nb) ");
        for(int i=1;i<=N;i++){
            printf("%d ",b);
            b=b+3;
        }
        printf("\nc) ");
        for(int i=1;i<=N;i++){
            printf("%d ",c);
            c=c-10;
        }
        printf("\nd) ");
        for(int i=1;i<=N;i++){
            printf("%d ",ds);
            ds=ds+8;
        }
        printf("\nPresione ENTER para regresar al menu.");
    }
    else
    {
        printf("Este valor no esta dado en el menu.\n");
        printf("Pulse dos veces ENTER para salir.");
        opc=4;
    }
    getch();
    system("cls");
}
return 0;
 }

