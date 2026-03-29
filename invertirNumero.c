#include <stdio.h>

int main() {
    int num, reversed = 0, original;
    
    printf("Ingresa un número entero: ");
    scanf("%d", &num);
    
    original = num;
    
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    
    printf("El número %d invertido es: %d\n", original, reversed);
    return 0;
}