#include <stdio.h>
#include <stdlib.h>
 
void PedirMemoria( int **DobleP , int N ){
    *DobleP = (int*)malloc(N*sizeof(int));
}

int main(){
    int V = 11;
    int *P;
    P = &V;
    PedirMemoria( &P , 4 );
    
    return 0;
}