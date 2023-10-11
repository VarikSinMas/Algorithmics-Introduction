#define _CRT_SECURE_NO_WARNINGS

//Likamos las librerías
#include <stdio.h>

int main(void)
{
    // Declaración de variables
    int numero, mayor, menor, i = 0, resto;

     //Demandamos los datos al usuario
    printf("Introduce un número entero:\n");
    scanf("%d", &numero);

    //Determinamos cuantos dígitos tiene ese número, cual de ellos es el menor, y cual el mayor
    mayor = menor = numero % 10;
    while (numero > 0) {
        i++;
        resto = numero % 10;
        if (resto > mayor) {
            mayor = resto;
        } else if (resto < menor) {
            menor = resto;
        }
        numero /= 10;
    }

    printf("\nEl número tiene %d dígitos,", i);
    printf("\nEl dígito mayor es: %d.", mayor);
    printf("\nEl dígito menor es: %d\n", menor);

    system("pause");

    return 0;
}
