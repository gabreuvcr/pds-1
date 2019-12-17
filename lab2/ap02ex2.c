#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    float alt, peso, imc;

    printf("Escreva a sua altura em metros: ");
    scanf("%f", &alt);
    printf("Escreva o seu peso em kg: ");
    scanf("%f", &peso);

    imc = peso / (pow(alt, 2));

    if(imc >= 40) {
        printf("Seu imc: %.2f \nSua situacao: Obesidade III (morbida).", imc);
    }
    else if(imc >= 35) {
        printf("Seu imc: %.2f \nSua situacao: Obesidade II (severa).", imc);
    }
    else if(imc >= 30) {
        printf("Seu imc: %.2f \nSua situacao: Obesidade I.", imc);
    }
    else if(imc >= 25) {
        printf("Seu imc: %.2f \nSua situacao: Acima do peso.", imc);
    }
    else if(imc >= 18.5) {
        printf("Seu imc: %.2f \nSua sitaucao: Peso normal.", imc);
    }
    else if(imc >= 17) {
        printf("Seu imc: %.2f \nSua situacao: Abaixo do peso.", imc);
    }
    else {
        printf("Seu imc: %.2f \nSua situacao: Muito abaixo do peso.", imc);
    }

    return 0;
}
