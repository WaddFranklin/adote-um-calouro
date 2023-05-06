#include <stdio.h>
#include <stdbool.h>

int maiorSequencia(int array[], int tamanho, int i, int maiorValorAtual, int maiorValor) {
    if (i == tamanho) return maiorValor;

    if (maiorValor < maiorValorAtual) maiorValor = maiorValorAtual;

    if (array[i] != array[i + 1]) {
        maiorSequencia(array, tamanho, ++i, ++maiorValorAtual, maiorValor);
    }
    else {
        maiorValorAtual = 1;
        maiorSequencia(array, tamanho, ++i, maiorValorAtual, maiorValor);
    }
}

void leArray(int array[], int tamanho, int i) {
    if (i == tamanho) return;

    int bit = -1;
    scanf("%d ", &bit);
    array[i] = bit;

    leArray(array, tamanho, ++i);
}

void printArray(int array[], int tamanho, int i) {
    if (i == tamanho) return;

    printf("%d ", array[i]);
    printArray(array, tamanho, ++i);
}

int loop(int numeroCasos, int i, int maiorValor) {
    if (i == numeroCasos) return maiorValor;

    int tamanhoBits = 0;
    scanf("%d", &tamanhoBits);

    int arrayDeBits[tamanhoBits];

    leArray(arrayDeBits, tamanhoBits, 0);
    // printf("Array %d: ", i);
    // printArray(arrayDeBits, tamanhoBits, 0);
    // printf("\n");

    int maiorValorAtual = maiorSequencia(arrayDeBits, tamanhoBits, 0, 1, 0);
    if (maiorValor < maiorValorAtual) maiorValor = maiorValorAtual;

    loop(numeroCasos, ++i, maiorValor);
}

int main() {
    int numeroCasos = 0;

    scanf("%d", &numeroCasos);
    getchar();

    printf("%d\n", loop(numeroCasos, 0, 0));
    
    return 0;
}