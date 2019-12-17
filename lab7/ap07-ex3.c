#include <stdio.h>
#include <stdlib.h>
#define N 4

int main() {
    int matriz[N][N], i, j, soma;
    float media;

    printf("Digite os valores da Matriz 4x4: \n");
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            printf("Escreva o valor da posicao [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n");
    soma=0;
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
            if(i == j) {
                soma = soma + matriz[i][j];
            }
        }
        printf("\n");
    }

    media=(float)soma / (float)N;
    printf("\nA media da diagonal da Matriz: %.2f", media);

    return 0;
}
