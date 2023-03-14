/*
    10  | 2
    (0)   5   | 2
         (1)   2  | 2
               (0)  1 

     1010 = 2 + 8 = 10
    2^3     2^2    2^1  2^0
     8     4      2    1
*/

#include <stdio.h>

void decimal_para_binario(int numero) {
    // condição de parada
    if (numero <= 1) {
        printf("%d", numero);
        return;
    } else {
        int resto = 0;
        int quociente = 0;

        // pegamos apenas a parte inteira da divisão
        quociente = (int)(numero / 2);
        resto = numero % 2;

        decimal_para_binario(quociente);
        printf("%d", resto);
    }
}

int main() {
    decimal_para_binario(10);
    return 0;
}
