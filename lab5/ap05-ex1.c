#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int vetorInt[10], i, j;

	for(i = 0; i < 10; i++) {
		printf("Digite um valor inteiro para a posicao %d: ", i);
		scanf("%d", &vetorInt[i]);
	}
	for(j = 0; j < 10; j++) {
		printf("Valor do vetor[%d]: %d\n", j, vetorInt[j]);
	}
	
	return 0;
}
