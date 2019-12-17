#include <stdio.h>
#include <stdlib.h>
#define MAX_Linhas 12
#define MAX_Colunas 12

int main() {
    int matrizA[MAX_Linhas][MAX_Colunas], matrizB[MAX_Linhas][MAX_Colunas], matrizResultado[MAX_Linhas][MAX_Colunas];
    int linha, coluna;
    int i, j;

    printf("Digite o numero de linhas da matriz (Maximo 12): ");
    scanf("%d", &linha);
    printf("Digite o numero de colunas da matriz (Maximo 12): ");
    scanf("%d", &coluna);
    printf("\nDigite os valores da primeira matriz: \n\n");

    for(i = 0; i < linha; i++) {
        for(j = 0; j < coluna; j++) {
            printf("Digite o valor da posicao A= [%d, %d]: ", i,j);
            scanf("%d", &matrizA[i][j]);
        }
    }
    printf("\nDigite os valores da segunda matriz: \n\n");
    for(i = 0; i < linha; i++) {
        for(j = 0; j < coluna; j++) {
            printf("Digite o valor da posicao B= [%d, %d]: ", i,j);
            scanf("%d", &matrizB[i][j]);
        }
    }
    printf("\nA matriz resultante:\n");
    for(i = 0; i < linha; i++) {
        for(j = 0; j < coluna; j++) {
            matrizResultado[i][j]=matrizA[i][j] + matrizB[i][j];
            printf("%d ", matrizResultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
