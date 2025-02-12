#include <stdio.h>

int main() {
    int n,i,j;

    printf("| Ingresa un numero\n");
    printf("|-> " ); scanf( "%d", &n );

    for( i = 1 ; i <= n ; i++ ){
        if( i == 1 || i == n ){
            for( j = 1 ; j <= n ; j++ ){
                printf("%c",'*');
            }
        }else{
            for( j = 1 ; j <= n ; j++ ){
                printf( "%c" , ( ( j == 1 || j == n )? '*' : ' ' ) );
                /*
                if( j == 1 || j == n ) printf( "%c" , '*' );
                else printf( "%c" , ' ' );
                */
            }
        }
        printf("\n");
    }

    return 0;
}