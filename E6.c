#include <stdio.h>

int main(){
    char frase[50];
    char F[50];
    int i,j = 0 ;

    printf("| Inrgresa una frase\n");
    printf("|-> " ); gets( frase );

    for( i = 0 ; i < 50  ; i++ ){
        if( frase[i] != ' ' ){
            F[j++] = frase[i];
        }
    }
	
    printf( "%s" , F );

    return 0;
}