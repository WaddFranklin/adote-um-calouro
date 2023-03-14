/*
    Sequência de fibonacci: 1,1,2,3,5,8,13,21

    n igual a 1 = 1
    n igual a 0 = 0
    n > 1 -> fib(n) = fib(n - 1) + fib(n - 2)

    fib(3) = 2         
    fib(5) = 5         
*/

#include <stdio.h>

int fib(int numero) {
    if (numero == 1) {
        return 1;
    } else if (numero == 2) {
        return 1;
    } else {
        return fib(numero - 1) + fib(numero - 2);
    }
}

int main() {

    int num = 8;

    printf("O %do numero da seq. de Fibonacci eh %d\n", num, fib(num));

    return 0;
}
