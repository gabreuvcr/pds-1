#include <stdio.h>
#include <stdlib.h>

int main() {
    int N[10], i, menor, posicao;

    for(i = 0; i < 10; i++) {
        printf("Digite o valor da posicao N[%d]: ", i + 1);
        scanf("%d", &N[i]);
    }
    menor = N[0];
    for(i = 0; i < 10; i++) {
        if (N[i] < menor) {
            menor = N[i];
            posicao = i + 1;
        }
    }
    printf("O menor elemento de N e %d e sua posicao dentro do vetor e: %d", menor, posicao);

    return 0;
}
