#include <stdio.h>
#include <stdlib.h>
#define TAM_VET 4

 // declaracao do modelo data
 struct data{
 	int dia, mes, ano;
 };

 // declaracao do modelo funcionario
 struct aluno {
 	char nome[50];
 	double mediaFinal;
 	struct data nascimento;
 };
 
int main() {
	int i;

	// declaracao e inicializacao do vetor de estruturas vet
	struct aluno faculdade[TAM_VET];

	for(i = 0; i < TAM_VET; i++) {
		fflush(stdin);
		printf("Entre nome: ");
		gets( faculdade[i].nome);
		printf("Entre media final: ");
		scanf("%lf", &faculdade[i].mediaFinal);
		//printf("Entre dia, mes e ano de nascimento: ");
		//scanf("%d, %d, %d", &faculdade[i].nascimento.dia, &faculdade[i].nascimento.mes, &faculdade[i].nascimento.ano);
		printf("Entre dia de nascimento: ");
		scanf("%d", &faculdade[i].nascimento.dia);
		printf("Entre mes de nascimento: ");
		scanf("%d", &faculdade[i].nascimento.mes);
		printf("Entre ano de nascimento: ");
		scanf("%d", &faculdade[i].nascimento.ano);
		printf("\n");
	}
	puts("Imprimindo os dados.\n");
	for(i = 0; i < TAM_VET; i++) {
		puts(faculdade[i].nome);
		printf("Media Final: %.2lf", faculdade[i].mediaFinal);
		printf("\n%d/%d/%d\n\n", faculdade[i].nascimento.dia,
		faculdade[i].nascimento.mes,
		faculdade[i].nascimento.ano );
	}

	return (0);
 }
