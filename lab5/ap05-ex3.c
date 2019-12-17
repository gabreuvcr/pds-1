#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main(int argc, char *argv[]) {
	int vetor[MAX], N;
	int i, j;
	
	printf("Digite quantos valores voce ira informar: ");
	scanf("%d", &N);
	printf("\n");

	for(i = 0; i < N; i++) {
		printf("Digite o valor da posicao %d: ", i);
		scanf("%d", &vetor[i]);
	}
	printf("\nOrdem decrescente:\n\n");
	for(j = (N - 1); j >= 0; j--) {
		printf("Vetor[%d]: %d\n",j, vetor[j]);
	}

	return 0;
}
