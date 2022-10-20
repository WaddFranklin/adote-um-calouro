#include <stdio.h>

int repetidor (int a, int b, int contador) {
    if (a == 1) return contador;
    
    if (a % 2) {
        a = (a * 3) + 1;
    }
    else a /= 2;

    repetidor(a, b, contador + 1);
}

int numeroTestado (int a, int b, int contadorAuxiliar) {
    if (a == b + 1) return contadorAuxiliar;

    int contadorAtual;
    contadorAtual = repetidor(a, b, 1);

    if (contadorAtual > contadorAuxiliar) contadorAuxiliar = contadorAtual;

    numeroTestado(a + 1, b, contadorAuxiliar);
}

void loop () {
    int x, y;
    
    if (scanf("%d %dy", &x, &y) != EOF) {
        //scanf("%d", &y);
        printf("%d %d %d\n", x, y , numeroTestado(x, y, 0));
    }
    else return;

    loop();
}

int main() {
    loop();
    return 0;
}