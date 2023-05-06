#include <stdio.h>
#include <stdbool.h>

/*
    [x] - Conceito
    [x] - tipos
        [x] - while
        [x] - do while
        [x] - for
    [x] - loop infinito
    [x] - break
    [x] - continue
    [x] - aplicações
        [x] - executar tarefas repetitivas
        [x] - percorrer estruturas de dados
        [x] - manter um programa em execução
*/

int main() {

    int i = 0;
    int soma = 0;
    int array[5] = {2, 4, 9, 7, 1};

    for (i = 0 ; i < 5 ; i++) {
        soma += array[i];
    }

    printf("%d\n", soma);

    return 0;
}

/*
    i = 1
    j = 0

    (0, 0) 
    (1, 0) 

    

*/