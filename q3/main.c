#include <stdio.h>
#include <stdlib.h>
#include "funtionq3.h"

int main()
{
    int numero, inv;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    inv = inverso (numero);
    printf("O inverso de %d eh %d\n", numero, inv);
    return 0;
}
