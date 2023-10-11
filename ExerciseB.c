#define _CRT_SECURE_NO_WARNINGS

//Linkamos las librerías
#include <stdio.h>
#include <stdbool.h>


int main(void)
{
    //Declaración de variables
    int a, b, adivb_usuario, adivb, i, correcto = false, resultado = 0;

    //Indicaciones previas
    printf("Introduce dos numeros, la division de dividendo por divisor ha de dar un numero entero.\n");
    printf("Confiaremos que dividendo es mayor o igual al divisor, y que la division da como resultado un numero entero.\n\n");

    //Demandamos los datos al usuario
    printf("Introduce un primer numero que sera el dividendo:\n");
    scanf("%d", &a);

    printf("Introduce un segundo numero que será el divisor:\n");
    scanf("%d", &b);

    printf("\nCuanto crees que es el resultado de dividir %d por %d?\n", a, b);                
    scanf("%d", &adivb_usuario);

    //Se ha de determinar cual es el resultado de dividir a entre b mediante un bucle en el que se vaya sumando, no dividiento a por b.
    for (i = 0; i < a; i += b) {
        resultado++;
    }

    //Comprobamos si la respuesta proporcionada por el usuario es correcta
    if (adivb_usuario == resultado) {
        correcto = true;
    }

    //Se muestra el resultado y si la respuesta del usuario era correcta o no
    printf("\nEl resultado de dividir %d entre %d es: %d\n", a, b, resultado);

    if (correcto) {
        printf("Tu respuesta es correcta!\n");
    } else {
        printf("Tu respuesta es incorrecta.\n");
    }

    printf("\n\n");

    system("pause");

    return 0;
}
