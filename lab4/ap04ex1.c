#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float salario(float trans, float ali, float metros) {
    float valor, salariofinal;
    if(metros >= 20) {
        metros = metros * 13;
        valor = metros + (trans * 2) + ali;
        salariofinal = valor;
        return(salariofinal);
    }
    else if(metros >= 10) {
        metros = metros * 11.50;
        valor = metros + (trans * 2) + ali;
        salariofinal = valor;
        return(salariofinal);
    }

    else if(metros < 10) {
        metros = metros * 10;
        valor = metros + (trans * 2) + ali;
        salariofinal = valor;
        return(salariofinal);
    }
}

int main() {
    float transporte, alimentacao, valor, metrosq, valorreceb, contador;
    int pedreiros;
    printf("Quantos pedreiros ira utilizar? ");
    scanf("%d", &pedreiros);

    contador=1;

    while(contador <= pedreiros) {
        printf("Qual o valor do transporte unitario: ");
        scanf("%f", &transporte);
        printf("Qual e o valor do vale-alimentacao: ");
        scanf("%f", &alimentacao);
        printf("Quantos metros quadrados voce trabalhou? ");
        scanf("%f", &metrosq);

        valorreceb = salario(transporte, alimentacao, metrosq);

        printf("O pedreiro deve receber R$ %.2f\n", valorreceb);
        printf("\n");

        contador++;
    }

    return 0;
}
