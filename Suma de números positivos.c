//Escribir un programa que reciba como datos N números enteros y obtenga solamente la suma de los números positivos.
#include <stdio.h>

int main() {
    int N, num, sum = 0;
    printf("Este programa puede recibir numeros positivos y negativos en el dominio de los enteros, pero solo va a sumar los positivos\n\n");
    printf("Ingresa la cantidad de numeros que deseas sumar: ");
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        printf("Ingrese el numero correspondiente a la posicion %d: ", i);
        scanf("%d", &num);
        
        if (num > 0) {
            sum = num + sum;
        }
    }   

    printf("La suma de los %d ", N);
    printf( "numeros es de: %d\n", sum);
    return 0;
}