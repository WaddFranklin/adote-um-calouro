#include<stdio.h>
#include<stdbool.h>
#include<math.h>

#define FIM_DO_PROGRAMA -1

bool ehPar(int numero) {
    return numero % 2 == 0;
}

bool ehDivisivel(int numero, int divisor) {
    return numero % divisor == 0;
}

bool ehPrimo(int numero, int divisor) {
    if (numero == 2 || divisor == 1) {
        return true;
    } else if (ehPar(numero) || ehDivisivel(numero, divisor) || numero < 2) {
        return false;
    } else {
        ehPrimo(numero, divisor - 2);
    }
}

void leInputs() {
    int numero = 0;
    scanf("%d", &numero);

    if (numero != FIM_DO_PROGRAMA) {
        int limite = (int)floor(sqrt(numero));
        if (ehPar(limite)) limite--;

        printf("%d\n", ehPrimo(numero, limite));
        leInputs();
    } else {
        return;
    }
}

int main() {
    leInputs();
    return 0;
}
