#include<stdio.h>

int fatorial(int numero) {
    if (numero == 1) {
        return 1;
    } else {
        return numero * fatorial(numero - 1);
    }
}

void converteDecimalParaBinario(int decimal) {
    if (decimal < 2) {
        printf("%d", decimal);
        return;
    } else {
        int quociente = (int)(decimal / 2);
        int resto = decimal % 2;

        converteDecimalParaBinario(quociente);
        printf("%d", resto);
    }
}

int main() {
    converteDecimalParaBinario(11);
    printf("\n");
    return 0;
}
