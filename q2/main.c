#include <stdio.h>
#include <stdlib.h>
#include "functionq2.h"

int main()
{
    int base, expoente, resultado;
        printf("Digite a base: ");
        scanf("%d", &base);
            printf("Digite o expoente: ");
            scanf("%d", &expoente);
    resultado = potencia (base, expoente);
    printf("Resultado: %d\n", resultado);
    return 0;
}
