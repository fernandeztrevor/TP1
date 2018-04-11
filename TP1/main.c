#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <float.h>

#include "funcion.h"




int main()
{
    char seguir='s';
    int opcion=0;
    float op1;
    float op2;
    float resultado;
    float ingresado;

while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=%.2f)\n", op1);
        printf("2- Ingresar 2do operando (B=%.2f)\n", op2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);


        switch(opcion)
        {
            case 1:
                {
                    op1 = ingreso();
                }
                break;
            case 2:
                {
                    op2 = ingreso();
                }
                break;
            case 3:
                {
                  resultado = sumar(op1, op2);
                }
                break;
            case 4:
                {
                    resultado=restar(op1, op2);
                }
                break;
            case 5:
                {
                  resultado=dividir(op1, op2);
                }
                break;
            case 6:
                {
                    resultado=multiplicar(op1, op2);
                }
                break;
            case 7:
                break;
            case 8:
                printf("\nEl resultado de la suma es: %.2f\n", resultado = sumar(op1, op2));
                printf("\nEl resultado de la resta es: %.2f\n", resultado = restar(op1, op2));
                printf("\nEl resultado de la división es: %.2f\n", resultado = dividir(op1, op2));
                printf("\nEl resultado de la multiplicación es: %.2f\n", resultado = multiplicar(op1, op2));
                printf("\nEl factorial del primer operador ingresado es: %d\n", resultado = factorial(op1));
                break;
            case 9:
                seguir = 'n';
                break;
        }

    }
    return 0;
}

/*
int ingreso()
{
    int ingreso;
    printf("Ingrese un valor: \n");
    scanf("%d", &ingreso);

    return ingreso;
};
/*char operacion()
{
    char operacion;
    operacion=getche();
}
int sumar ()
{
     //scanf("%d", numero1);
    //scanf("%d", numero2);
    resultado=op1+op2;
    printf("\nEl resultado de la suma es: %.2f\n", resultado);

    return sumar;
}
int restar()
{

    //scanf("%d", numero1);
    //scanf("%d", numero2);
    resultado=op1-op2;
    printf("\nEl resultado de la resta es: %.2f\n", resultado);

    return restar;
}
int dividir()
{
     //scanf("%f", numero1);
    //scanf("%f", numero2);

    while(op2==0)
    {
        printf("Error, el operador 2 no puede ser 0, reingrese: \n");
        scanf("%d", &op2);
    }
    resultado=(float)op1/op2;

    printf("\nEl resultado de la división es: %.2f\n", resultado);

    return dividir;
}
int multiplicar()
{
    //scanf("%d", numero1);
    //scanf("%d", numero2);
    resultado=op1*op2;
    printf("\nEl resultado de la multiplicación es: %.2f\n", resultado);

    return multiplicar;
}
*/
