#include <stdio.h>
#include <stdlib.h>


int main(){
    int entero = 12;
    float flotnte = 3.14;
    char caracter = 'v';
    short corto = 1;
    char cadena[10] = "valeria";
    int arreglo[10];

    int tamentero = sizeof(entero);
    int tamflotante;
    int tamcaracter;
    int tamcorto;
    int tamString = sizeof(cadena);
    int tamarreglo = sizeof(arreglo);

    tamflotante = sizeof(float);
    tamcaracter = sizeof(caracter);
    tamcorto = sizeof (short);

    printf("Valor del entero = %d\n",entero);
    printf("Valor del flotante = %f\n",flotnte);
    printf("Valor del caracter = %c\n",caracter);
    printf("Valor del corto = %hd\n",corto);
    printf("Valor de la cadena = %s\n",cadena);
    printf("-----------------------------------------\n");
    printf("tamanio del entero = %d\n", tamentero);
    printf("tamanio del tlotante = %d\n", tamflotante);
    printf("tamanio del caracter = %d\n", tamcaracter);
    printf("tamanio del corto = %d\n", tamcorto);
    printf("tamanio de la cadena = %d\n", tamString);
    printf("tamanio del arreglo = %d\n", tamarreglo);
    printf("Numero de enteros en el arreglo = %d \n", (int)(sizeof(arreglo)/sizeof(int)) );

    return 0;
}