#include <stdio.h>
#include <stdlib.h>
///Realice una pequeña calculadora, utilizando funciones
///(una funcion de suma, una de multiplicacion, una de resta, una de division…)
float suma(float, float);
float resta(float, float );
float multiplicar(float,float);
float dividir(float, float );
int main()
{
    int ctrl,menu;
    float num_A, num_B;
    do
    {
        printf("1.suma \n");
        printf("2.resta \n");
        printf("3.multiplica \n");
        printf("4.divide \n");
        printf("ingrese la opcion : \n");
        scanf("%d", &menu);
        printf("Ingrese el primer numero \n");
        scanf("%f", &num_A);
        printf("Ahora ingrese el segundo valor \n");
        scanf("%f", &num_B);

        switch(menu)
        {
        case 1:
            printf("La suma de %.f y %.f es %.f \n", num_A, num_B,suma(num_A,num_B));
            break;
        case 2:
            printf("La resta de %.f y %.f es %.f\n ", num_A, num_B,resta(num_A,num_B));
            break;
        case 3:
            printf("La multiplicacion de %.f y %.f es %.f \n", num_A, num_B,multiplicar(num_A,num_B));
            break;
        case 4:
            printf("La division de %.f y %.f es %.f \n", num_A, num_B,dividir(num_A,num_B));
            break;
        }
        printf("Escape para finalizar, presiones otra tecla para continuar \n");
        fflush(stdin);
        ctrl=getch();
        system("cls");
    }
    while(ctrl!=27);








    return 0;
}


float suma(float a, float b)
{
    float r;

    r = a+b;

    return r;
}
float resta(float a, float b)
{
    float r;

    r = a-b;

    return r;
}
float multiplicar(float a, float b)
{
    float r;

    r = a*b;

    return r;
}
float dividir(float a, float b)
{
    float r;

    r = a/b;

    return r;
}
