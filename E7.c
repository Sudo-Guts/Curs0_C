#include <stdio.h>

int main() {
    int num,i,j;

    printf("| Inrgresa un numero\n");
    printf("|-> " ); scanf( "%d", &num );

    for( i = 1 ; i <= num ; i++ ){
        for( j = 1 ; j <= num ; j++ ){
            printf("%c",'*');
        }
        printf("\n");
    }

    return 0;
}