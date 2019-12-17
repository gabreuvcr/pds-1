#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int impares(int numero) {
    if(numero % 2 == 0) {
        return 0;
    }
    else {
        return 1;
    }
}


int main() {
    int numeroMax, contador, numerosimp, q;
    printf("Informe o valor maximo: ");
    scanf("%d", &numeroMax);

    for(contador = 1; contador <= numeroMax; contador++) {
        numerosimp = impares(contador);
        if(numerosimp == 1) {
            printf("%d ", contador);
        }
        if(contador % 20 == 0) {
            printf("\n");
        }
    }

    return 0;
}
