#include <stdio.h>
#include <stdlib.h>

int main() {
    int N,i, soma;
    float media;

    printf("Digite o numero de alunos da sala: ");
    scanf("%d", &N);

    int *vetor= (int*)malloc(sizeof(int) * N);
    if(*vetor == NULL) {
        printf("Nao foi possivel alocar a memoria solicitada.");
        exit(0);
    }
    for(i = 0; i < N; i++) {
        printf("Digite a idade do aluno %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    soma=0;
    for(i = 0; i < N; i++) {
        soma = soma + vetor[i];
    }

    media=(float)soma / (float)N;
    printf("A media das idades e: %.1f", media);
    free(vetor);
    
    return 0;
}
