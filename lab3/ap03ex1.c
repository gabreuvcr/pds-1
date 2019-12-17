#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int linha, i, c, soma=1;
    printf("Digite um numero para achar a linha do triangulo de Floyd: ");
    scanf("%d", &linha);

    if(linha <= 0) {
        printf("Escreva um numero valido.");
    }
    else {
        for(i = 1; i <= linha; i++) {
            for(c = 1; c <= i; c++) {
                printf("%d ", soma);
                soma=soma+1;
            }
            printf("\n");
        }
    }

  return 0;
}
