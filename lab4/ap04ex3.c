#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int aprovadoFrequencia(int aulas, int presenca) {
	if(presenca >= (0.75 * aulas)) {
		return 1;
	}
	else {
		return 0;
	}
}

char verificadorConceito(int nota) {
	char conceito;

	if(nota >= 90) {
		conceito='A';
		return(conceito);
	}
	else if(nota >= 80) {
		conceito='B';
		return(conceito);
	}
	else if(nota >= 70) {
		conceito='C';
		return(conceito);
	}
	else if(nota >= 60) {
		conceito='D';
		return(conceito);
	}
	else if(nota >= 40) {
		conceito='E';
		return(conceito);
	}
	else {
		conceito='F';
		return(conceito);
	}
}

int main() {
	int disciplina, numaulas, presenca, nota, contador;
	char conceito;
	printf("Quantas disciplinas voce cursou? ");
	scanf("%d", &disciplina);

	for(contador = 1; contador <= disciplina; contador++) {
		printf("Quantas aulas lecionadas voce teve? ");
		scanf("%d", &numaulas);
		printf("Quantas presencas voce teve? ");
		scanf("%d", &presenca);
		printf("Qual a sua nota na disciplina? ");
		scanf("%d", &nota);
		if(aprovadoFrequencia(numaulas, presenca) == 0) {
			printf("O aluno foi reprovado por frequencia, seu conceito e I\n");
			printf("\n");
		}
		else if(nota < 60) {
			conceito = verificadorConceito(nota);
			printf("O aluno foi reprovado na Disciplina %d com conceito %c\n", contador, conceito);
			printf("\n");
		}
		else {
			conceito = verificadorConceito(nota);
			printf("O aluno foi aprovado na Disciplina %d com conceito %c\n", contador, conceito);
			printf("\n");

		}
	}

	return 0;
}
