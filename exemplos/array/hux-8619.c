#include <stdio.h>
#include <stdbool.h>

#define SIZE 100

void inicializaArray(int array[], int i, int size) {
    if (i == size) {
        return;
    } else {
        scanf("%d\n", &array[i]);
        inicializaArray(array, ++i, size);
    }
}

void buscaNumeroEmArray(int array[], int i, int size, int numeroProcurado) {
    if (i == size) {
        return;
    } else {
        if (array[i] == numeroProcurado) {
            printf("%d\n", i);
        }
        buscaNumeroEmArray(array, ++i, size, numeroProcurado);
    }
}

int main() {
    
    int numeros[SIZE] = {0};
    int numeroProcurado = 0;

    inicializaArray(numeros, 0, SIZE);
    scanf("%d\n", &numeroProcurado);
    buscaNumeroEmArray(numeros, 0, SIZE, numeroProcurado);

    return 0;
}