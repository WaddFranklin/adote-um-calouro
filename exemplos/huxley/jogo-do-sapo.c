#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int calculaPosicao(int tamanhoTabuleiro, int posicaoAtual, int movimentacao) {

    int novaPosicao = posicaoAtual + movimentacao;

    printf("posicao atual = %d\nmovimentacao = %d\n\n", posicaoAtual, movimentacao);

    if (novaPosicao >= 0 && novaPosicao <= tamanhoTabuleiro) {
        return novaPosicao;
    } else if (novaPosicao < 0) {
        return tamanhoTabuleiro + (novaPosicao % tamanhoTabuleiro);
    } else {
        return posicaoAtual % tamanhoTabuleiro;
    }
}

int main() {
    
    int tamanhoTabuleiro, numeroJogadores, numeroRodadas;
    int i, j;

    scanf("%d %d %d", &tamanhoTabuleiro, &numeroJogadores, &numeroRodadas);
    printf("%d %d %d\n", tamanhoTabuleiro, numeroJogadores, numeroRodadas);
    
    int tabuleiro[tamanhoTabuleiro];
    memset(tabuleiro, 0, sizeof(tabuleiro));

    int posicoesJogadores[numeroJogadores];
    memset(posicoesJogadores, 0, sizeof(posicoesJogadores));

    for (i = 0 ; i < tamanhoTabuleiro ; i++) {
        scanf("%d", &tabuleiro[i]);
    }

    int rodadasVsJogadas[numeroRodadas][numeroJogadores];

    for (i = 0 ; i < numeroRodadas ; i++) {
        for (j = 0 ; j < numeroJogadores ; j++) {
            scanf("%d", &rodadasVsJogadas[i][j]);
            printf("li o número %d\n", rodadasVsJogadas[i][j]);
        }
    }

    for (i = 0 ; i < numeroRodadas ; i++) {
        for (j = 0 ; numeroJogadores ; j++) {
            posicoesJogadores[j] = calculaPosicao(tamanhoTabuleiro, posicoesJogadores[j], rodadasVsJogadas[i][j]);
            posicoesJogadores[j] = calculaPosicao(tamanhoTabuleiro, posicoesJogadores[j], tabuleiro[posicoesJogadores[j]]);

            printf("posicao final do jogador %d eh %d\n", j, posicoesJogadores[j]);
        }
    }

    return 0;
    for (i = 0 ; i < numeroJogadores ; i++) {
        printf("%d\n", tabuleiro[posicoesJogadores[i]]);
    }
    
    return 0;
}