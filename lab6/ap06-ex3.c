#include <stdio.h>
#include <stdlib.h>
#define linhasA 3
#define colunasA 3
#define linhasB 3
#define colunasB 3


int main(int argc, char *argv[]) {
	float a[linhasA][colunasA];
	float b[linhasB][colunasB];
	float c[linhasA][colunasB];
	float aux, soma;
	int i, j, k;
	int la, ca, lb, cb, lc, cc;

	printf("Digite o numero de linhas(Max 3) e colunas (Max 3)de A: ");
	scanf("%d %d", &la, &ca);
	printf("Digite o numero de linhas(Max 3) e colunas (Max 3) de B: ");
	scanf("%d %d", &lb, &cb);

	if(ca != lb) {
		printf("\nNao e possivel multiplicar essa matriz, o numero de colunas de A deve ser igual ao de linhas de B.");
		exit(0);
	}
	printf("Digite os valores da matriz A: \n");
	for(i = 0; i < la; i++) {
		for(j = 0; j < ca; j++) {
			printf("Digite o valor da posicao A[%d][%d]: ", i + 1, j + 1);
			scanf("%f", &aux);
			a[i][j] = aux;	
		}
	}
	printf("\nDigite os valores da matriz B: \n");
	for(i = 0; i < lb; i++) {
		for(j = 0; j < cb; j++) {
			printf("Digite o valor da posicao B[%d][%d]: ", i + 1, j + 1);
			scanf("%f", &aux);
			b[i][j] = aux;
		}
	}
	
	//multiplicacao das matrizes
	for (i = 0; i < la; i++) {
		for(j = 0; j < cb; j++) {
			c[i][j] = 0;
			soma = 0;
			for(k = 0; k < lb; k++) {
				soma = soma + (a[i][k] * b[k][j]);
				c[i][j] = soma;	
			}
		}
	}
	printf("\nA multiplicacao das matrizes AxB: \n");
	for(i = 0; i < la; i++) {
		printf(" |");
		for(j = 0; j < cb; j++) {
			printf("%.2f ", c[i][j]);
		}
		printf("|\n");
	}

	return 0;
}
