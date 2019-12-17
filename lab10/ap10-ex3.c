#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void serie_ackerman(int valor) {
    if(valor == 1) {
        return;
    }
    if(valor % 2 == 0) {
        valor = valor / 2;
        printf("%d ", valor);
        serie_ackerman(valor);
    }
    else {
        valor = 3 * valor + 1;
        printf("%d ", valor);
        serie_ackerman(valor);
    }
}

int main() {
    int valor;
    printf("Digite um valor positivo maior do que zero: ");
    scanf("%d", &valor);
    serie_ackerman(valor);

    return 0;   
}
