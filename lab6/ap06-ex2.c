#include <stdio.h>
#include <stdlib.h>
#define N 3

void vetormatriz(double v[], double A[][N], int dimensao) {
    int i, j, k;
    k = 0;

    for(i = 0; i < dimensao; i++)   {
        printf("| ");
        for(j = 0; j < dimensao; j++) {
            A[i][j]= v[k];
            k++;
            printf("%.2lf ", A[i][j]);
        }
        printf("|\n");
    }
}

int main() {
    int i, dimensao;
    double v[N * N], A[N][N];

    printf("Digite a dimensao da matriz quadrada (Maximo 3): ");
    scanf("%d", &dimensao);
    printf("\n");

    for(i = 0; i < (dimensao * dimensao); i++) {
        printf("Digite o valor do vetor[%d]: ", i);
        scanf("%lf", &v[i]);
    }
	printf("\n");
    vetormatriz(v, A, dimensao);

    return 0;
}
