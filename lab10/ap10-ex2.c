#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calculaBinario(int x) {
    if(x >= 1) {
        calculaBinario(x / 2);
        if(x % 2 == 0) {
            printf("0");
        }
        else {
            printf("1");
        }
    }
}

int main(){
    int numero;
    printf("Digite um numero para converter para binario: ");
    scanf("%d", &numero);
    calculaBinario(numero);

    return 0;
}
