#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float vetorFloat[7];
	int i, j, k;

	for(i = 0; i < 7; i++) {
		printf("Digite um valor real para a posicao %d: ", i);
		scanf("%f", &vetorFloat[i]);
	}
	for(j = 0; j < 7; j++) {
		printf("Valor do vetor[%d]: %.2f\n", j, vetorFloat[j] );
	}
	printf("\nIndices pares: \n");
	for(k = 0; k < 7; k++) {
		if((k % 2) == 0) {
			printf("Vetor[%d]: %.2f\n",k, vetorFloat[k]);
		}
	}		
		
	return 0;
}
