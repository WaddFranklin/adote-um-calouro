// função recursiva
/*
    fatorial => 3! = 3*2*1 = 6
    fatorial => 5! = 5*4*3*2*1 = 120
    fatorial => 1! = 1
    fatorial => 0! = 1

    fat(5) = 5*4*3*2*1
    fat(4) = 4*3*2*1

    fat(n) = n * fat(n - 1)

    fat(5) = 5 * 24 = 120
    fat(4) = 4 * 6 = 24
    fat(3) = 3 * 2 = 6
    fat(2) = 2 * 1 = 2
    fat(1) = 1  # caso de parada

    toda função recursiva vai ter:
        - condição de parada
        - chamada recursiva
        - incremento ou decremento
*/

#include <stdio.h>

int fat(int numero) {
    // condição de parada
    if (numero == 1 || numero == 0) {
        return 1;
    } else {
        return numero * fat(numero - 1); // chamada recursiva
    }
}

int main() {

    int num = 5;

    printf("O fatorial de %d eh %d\n", num, fat(num));
    return 0;
}
