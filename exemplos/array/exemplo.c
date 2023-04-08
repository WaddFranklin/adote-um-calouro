#include <stdio.h>
#include <stdbool.h>

bool passouCapacidadeMaxima(int entradas[], int saidas[], int i, int tamanho, int capacidadeMax, int capacidadeAtual) {
    if (i == tamanho) {
        return false;
    } else {
        capacidadeAtual -= saidas[i];
        capacidadeAtual += entradas[i];
        if (capacidadeAtual > capacidadeMax) {
            return true;
        } else {
            passouCapacidadeMaxima(entradas, saidas, ++i, tamanho, capacidadeMax, capacidadeAtual);
        }
    }
}

void leValores(int entradas[], int saidas[], int i, int tamanho) {
    if (i == tamanho) {
        return;
    } else {
        scanf("%d %d", &saidas[i], &entradas[i]);
        leValores(entradas, saidas, ++i, tamanho);
    }
}

void printaArray(int array[], int i, int tamanho) {
    if (i == tamanho) {
        return;
    } else {
        printf("%d ", array[i]);
        printaArray(array, ++i, tamanho);
    }
}

int main() {
    
    int leituras = 0;
    int capacidadeMaxima = 0;

    scanf("%d %d\n", &leituras, &capacidadeMaxima);

    int entradas[leituras];
    int saidas[leituras];

    leValores(entradas, saidas, 0, leituras);

    bool excedeu = passouCapacidadeMaxima(entradas, saidas, 0, leituras, capacidadeMaxima, 0);
    (excedeu) ? printf("S\n") : printf("N\n");

    
    return 0;
}