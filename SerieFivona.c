#include <stdio.h>

int main() {
    int n, primero = 0, segundo = 1, siguiente;
    
    printf("Ingresa la cantidad de términos de Fibonacci: ");
    scanf("%d", &n);
    
    printf("Serie de Fibonacci (%d términos): ", n);
    
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            siguiente = i;
        } else {
            siguiente = primero + segundo;
            primero = segundo;
            segundo = siguiente;
        }
        printf("%d ", siguiente);
    }
    printf("\n");
    return 0;
}