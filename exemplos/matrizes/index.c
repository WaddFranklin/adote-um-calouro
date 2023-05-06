#include <stdio.h>
#include <stdbool.h>

/*
    [1, 2, 23, 4, 5, 6, 0]

    [[1, 2], 
     [1, 2], 
     [0, 0]]

    dimensao 2

    [x] - Conceito
    [x] - Declaração
    [x] - Inicialização
    [x] - leitura / escrita
    [x] - percorrer uma matriz
    [x] - matriz como parâmetro de função
    [] - aplicações
        [x] - tabelas
        [x] - tabuleiro de jogos
*/

int main() {
    
    int linhas, colunas;
    int i, j;

    scanf("%d %d", &linhas, &colunas);

    int matriz[linhas][colunas];

    // inicialização da matriz por um input
    for (i = 0 ; i < linhas ; i++) {
        for (j = 0 ; j < colunas ; j++) {
            scanf("%d ", &matriz[i][j]);
        }
    }

    // printando a matriz
    for (i = 0 ; i < linhas ; i++) {
        for (j = 0 ; j < colunas ; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}