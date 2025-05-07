#include <stdio.h>

int main()
{
    int numeros[10];
    int i, numdis;
    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &numeros[i]);
    }
    numdis = numerosdistintos(numeros, 10);
    printf("O vetor possui %d numeros distintos.\n", numdis);
    return 0;
}
