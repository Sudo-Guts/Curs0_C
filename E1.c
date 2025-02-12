#include <stdio.h>

int main(){
    int num,i;
    int D = 10;

    printf("| Inrgresa un numero\n");
    printf("|-> " ); scanf( "%d", &num );

    for( i = 0 ; num > 0 ; num /= D , i++ );
    // num = num / 10;
	
    printf( "%d" , i );

    return 0;
}