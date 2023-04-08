/*
    - declaração: ok
    - inicialização: ok
    - índices

    - leitura de dados
    - escrita de dados
*/

#include <stdio.h>
#include <stdbool.h>

void printaPrimeiroEUltimoValor(int listasssss[], int tamanho) {
    printf("O 1o valor eh %d, e o ultimo eh %d\n", listasssss[0], listasssss[tamanho - 1]);
}

// percorrer um array
void printaArray(int array[], int indice, int tamanho) {
    if (indice == tamanho) {
        printf("\n");
        return;
    } else {
        printf("%d ", array[indice]);
        printaArray(array, indice + 1, tamanho);
    }
}

double mediaDasNotas(double array[], int indice, int tamanho, double montante) {
    if (indice == tamanho) {
        return montante / tamanho;
    } else {
        montante += array[indice];
        mediaDasNotas(array, ++indice, tamanho, montante);
    }
}

int main() {

    double notas[8] = {12.0, 44.0, 111.0, 128.0, 43.0, 545.0, 999.0, 234.0};

    // printaArray(notas, 0, 8);
    double media = mediaDasNotas(notas, 0, 8, 0);
    printf("%lf\n", media);
    
    return 0;
}