#include <stdio.h>
#include <stdlib.h>

int inverso(int numero) { // Function to reverse an integer
    int inverso = 0;
    while (numero != 0) {
        inverso = inverso * 10 + numero % 10;
        numero /= 10;
    }
    return inverso;
}