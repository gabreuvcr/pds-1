#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int a, b, c;
    float x1, x2, delta;

    // solicitando os valores das equa��o de segunda grau:

    printf("Escreva o valor de a: ");
    scanf("%i", &a);
    printf("Escreva o valor de b: ");
    scanf("%i", &b);
    printf("Escreva o vlaor de c: ");
    scanf("%i", &c);

	// calculando o valor de delta:

    delta = pow(b, 2) - (4 * a * c);
    printf("Valor de delta: %0.f \n", delta);

    // calculando o valor das raizes caso delta maior ou igual 0 :

    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

	// resultado:

	if(delta >= 0) {
        printf("Primeira raiz: %0.f\n", x1);
        printf("Segunda raiz: %0.f\n", x2);
	}
	else {
	    printf("Nao existe raiz real para delta < 0");
	}

	return 0;
}
