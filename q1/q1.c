#include <stdio.h>
#include <stdbool.h>
#include "functionq1.h"


int main() {
    int a, b, inicio, fim;

    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    inicio = (a < b) ? a : b;
    fim = (a < b) ? b : a;

    printf("Numeros primos entre %d e %d:\n", inicio, fim);
    for (int num = inicio; num <= fim; num++) {
        if (ehPrimo(num)) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}