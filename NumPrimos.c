#include <stdio.h>
#include <math.h>

int esPrimo(int n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }
    return 1;
}

int main() {
    int numero;
    printf("Ingresa un número para verificar si es primo: ");
    scanf("%d", &numero);
    
    if (esPrimo(numero)) {
        printf("%d es un número primo.\n", numero);
    } else {
        printf("%d no es un número primo.\n", numero);
    }
    return 0;
}