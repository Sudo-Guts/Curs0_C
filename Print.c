#include <stdio.h>
#include <stdlib.h>

int main(){
    char hola[10] = "hola, mundo";

    printf("|%s|\n",hola);
    printf("|%25s|\n",hola);
    printf("|%-25s|\n",hola);
    printf("|%.5s|\n",hola);
    printf("|%25.5s|\n",hola);
    printf("|%-25.5s|\n",hola);


    printf("%c",74);
    printf("%d",'J');

    return 0;
}