#include <stdio.h>
#include <stdbool.h>

void ordena(int array[], int i, int j, int tamanho) {
    // se i chegar na penúltima casa do array, encerra a função
    if (i >= tamanho - 1) {
        return;
    }

    // se o j chegar na última casa do array, incrementa o i e reseta o j = i
    if (j >= tamanho) {
        i++;
        j = i;
    }

    // verifica se o valor da casa i é maior do que o da casa j
    // se for, troca os valores das casas i e j
    if (array[i] > array[j]) {
        int aux = array[i];
        array[i] = array[j];
        array[j] = aux;
    }
    
    // chama a próxima recursão incrementando j para a próxima comparação
    ordena(array, i, ++j, tamanho);
}

void printaArray(int array[], int tamanho) {
    int i = 0;

    for (i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int array[] = {3, 9, 0, 4, 6, 7, 1, 8, 2, 5};

    printaArray(array, 10);
    ordena(array, 0, 1, 10);
    printaArray(array, 10);

    return 0;
}