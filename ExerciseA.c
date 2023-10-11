    #define _CRT_SECURE_NO_WARNINGS

    #include <stdio.h>


    int main(void)
    {
        //Declaración de variables
        int a, b, mayor, menor, i, suma;

        //Demandamos los datos al usuario
        printf("Introduce el primer numero entero:\n");
        scanf("%d", &a);
        printf("Introduce el segundo numero entero:\n");
        scanf("%d", &b);

        //Determinamos cual de los dos es mayor y printamos el mayor seguido del menor indicando cual es cual
        if (a > b) {
            mayor = a;
            menor = b;
            printf("El numero mayor es %d y el numero menor es %d\n", mayor, menor);
        }
        else if (b > a) {
            mayor = b;
            menor = a;
            printf("El numero mayor es %d y el numero menor es %d\n", mayor, menor);
        }
        else {
            printf("Ambos numeros introducidos son iguales.\n");
            return 0;
        }

        //Sumamos los números enteros en orden comprendidos entre el menor y el mayor determinados en el punto anterior
        suma = 0;
        for (i = menor; i <= mayor; i++) {
            suma += i;
        }

        printf("\n\nLa suma de los numeros enteros comprendidos entre %d y %d es: ", menor, mayor);
        printf("%d\n", suma);

        system("pause");

        return 0;
    }
