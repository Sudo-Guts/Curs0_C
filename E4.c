#include <stdio.h>

int main(){
    int num,i;
    char bool = 'V';

    printf("| Ingresa un numero\n");
    printf("|-> " ); scanf( "%d", &num );

    // Si el numero es menor que 2, no es primo.
    if( num < 2 ) bool = 'F';
    // Probar si es divisible entre algun numero, empezamos con el 2 hasta num-1
    for( i = 2 ; i < num ; i++ ){
        if( num % i == 0 ){
            // tiene un divisor distinto de 1 y de su numero
            bool = 'F';
        }
    }
    // Si no se cumple todo lo anterior, entonces es primo.

    printf( "%c" , bool );

    return 0;
}