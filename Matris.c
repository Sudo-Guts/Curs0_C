#include <stdio.h>
#include <stdlib.h>

int main(){
    int F = 3,C = 4;
    int V = 1;

    int **M = (int**)malloc(sizeof(int)*F); //Creamos filas

    for(int i = 0 ; i < F ; i++ ){
        *(M+i) = (int*)malloc(C*sizeof(int)); //Creamos columnas
    }
    
    for( int f = 0 ; f < F ; f++ ){
        for( int c = 0 ; c < C ; c++ ){
            *( *(M+f) + c ) = V++; // M[F][C]
        }
    }

    for( int f = 0 ; f < F ; f++ ){
        for( int c = 0 ; c < C ; c++ ){
            printf(" %d " , *( *(M+f) + c ) ); // M[F][C]
        }
        printf("\n");
    }

    return 0;
}
