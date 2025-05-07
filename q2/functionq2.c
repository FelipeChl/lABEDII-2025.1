#include <stdio.h>
#include <stdlib.h>

int potencia(int base, int expoente) {
    int resultado = 1;
    for (int i = 1; i <= expoente; i++) {
        resultado *= base;
    }
    return resultado;
}