#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

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