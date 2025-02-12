#include <stdio.h>
#include <string.h>

void convertirString( int num , char string[] ){
    int i,D = 10;
    for( i = 0 ; num > 0 ; num /= D , i++ );
    

}

int main(){
    int suma,num1,num2,i = 0;

    char n1[20], n2[20];
    
    // Leemos los números como cadenas para mantener su estructura
    printf("| Ingresa un numero\n");
    printf("|-> " ); scanf( "%s", n1 );
    printf("| Ingresa un numero\n");
    printf("|-> " ); scanf( "%s", n2 );

    //Imprimimos de manera vertical
    for( i = 0 ; n1[i] != NULL ; i++ ){
        printf("%c\n",n1[i]);
    }
    // Imprimimos el signo de suma
    printf("+\n");
    for( i = 0 ; n2[i] != NULL ; i++ ){
        printf("%c\n",n2[i]);
    }
    // Imprimimos el signo de igualdad
    printf("=\n");

    // La funcion atoi convierte una cadena de numero en un dato entero
    num1 = atoi(n1);
    num2 = atoi(n2);
    suma = num1 + num2;

    return 0;
}