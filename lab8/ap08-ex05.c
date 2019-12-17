#include <stdio.h>
#include <stdlib.h>
#define MAX 10

typedef struct pessoa {
	char nome[50];
	int idade;
	float peso;
	float altura;
} individuo;

int main(int argc, char *argv[]) {
	int i, n;
	individuo vetorCadastro[MAX];
	printf("Digite o numero de pacientes: ");
	scanf("%d", &n);
	printf("\nInsira os dados do(s) paciente(s):\n\n");

	for(i = 0; i < n; i++) {
		fflush(stdin);
		printf("Entre nome: ");
		gets(vetorCadastro[i].nome);
		printf("Entre idade: ");
		scanf("%d", &vetorCadastro[i].idade);
		printf("Entre peso: ");
		scanf("%f", &vetorCadastro[i].peso);
		printf("Entre altura: ");
		scanf("%f", &vetorCadastro[i].altura);
		printf("\n");
	}
	for(i = 0; i < n; i++) {
		printf("Ficha %d: \n", i + 1);
		printf("\tNome: %s\n", vetorCadastro[i].nome);
		printf("\tIdade: %d anos\n", vetorCadastro[i].idade);
		printf("\tPeso: %.2f kg\n", vetorCadastro[i].peso);
		printf("\tAltura: %.2f m\n", vetorCadastro[i].altura);
		printf("\n");
	}

	return 0;
}
