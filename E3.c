#include <stdio.h>
#include <string.h>

void imprimirVertical(const char *num) {
    while (*num) {
        printf("%c\n", *num);
        num++;
    }
}

int main() {
    char n[20], m[20];
    
    // Leer los números como cadenas para mantener su estructura
    scanf("%s %s", n, m);
    
    // Imprimir el primer número en vertical
    imprimirVertical(n);
    
    // Imprimir el signo de suma
    printf("+\n");
    
    // Imprimir el segundo número en vertical
    imprimirVertical(m);
    
    // Calcular la suma
    int num1 = atoi(n);
    int num2 = atoi(m);
    int suma = num1 + num2;
    
    // Imprimir el signo de igualdad
    printf("=\n");
    
    // Imprimir la suma en vertical
    char resultado[20];
    sprintf(resultado, "%d", suma);
    imprimirVertical(resultado);
    
    return 0;
}
