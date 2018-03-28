#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//#include <funciones.h>


int op1;
int op2;
int resultado;
int ingresado;

int main()
{
    char seguir='s';
    int opcion=0;


while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=%d)\n", op1);
        printf("2- Ingresar 2do operando (B=%d)\n", op2);
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
                    op1=ingreso();
                }
                break;
            case 2:
                {
                    op2=ingreso();
                }
                break;
            case 3:
                {
                  resultado=sumar();
                }
                break;
            case 4:
                {
                    resultado=restar();
                }
                break;
            case 5:
                {
                  resultado=dividir();
                }
                break;
            case 6:
                {
                    resultado=multiplicar();
                }
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                seguir = 'n';
                break;
        }

    }
    return 0;
}


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
}*/
int sumar ()
{
     //scanf("%d", numero1);
    //scanf("%d", numero2);
    resultado=op1+op2;
    printf("\nEl resultado de la suma es: %d\n", resultado);

    return sumar;
}
int restar()
{

    //scanf("%d", numero1);
    //scanf("%d", numero2);
    resultado=op1-op2;
    printf("\nEl resultado de la resta es: %d\n", resultado);

    return restar;
}
int dividir()
{
     //scanf("%f", numero1);
    //scanf("%f", numero2);
    while(op2==0);
    {
        printf("Error, el operador 2 no puede ser 0, reingrese: \n");
        scanf("%d", &op2);
    }
    resultado=(float)op1/op2;

    printf("\nEl resultado de la división es: %f\n", resultado);

    return dividir;
}
int multiplicar()
{
    //scanf("%d", numero1);
    //scanf("%d", numero2);
    resultado = op1 * op2;

    printf("\nEl resultado de la multiplicación es: %d\n", resultado);

    return multiplicar;
}

