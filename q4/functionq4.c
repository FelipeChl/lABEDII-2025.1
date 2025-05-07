#include <stdio.h>

int numerosdistintos(int vetor[], int tamanho)
{
    int count = 0;
    for (int i = 0; i < tamanho; i++)
    {
        int distinto = 1; // Assume que o número é distinto
        for (int j = 0; j < i; j++)
        {
            if (vetor[i] == vetor[j])
            {
                distinto = 0; // Não é distinto
                break;
            }
        }
        if (distinto)
        {
            count++;
        }
    }
    return count;
}
