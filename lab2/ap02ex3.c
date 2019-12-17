#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int ano;
    printf("Escreva o ano: ");
    scanf("%d", &ano);

    if(((ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0)) {
        printf("O ano informado e um ano bissexto");
    }
    else {
        printf("O ano informado nao e bissexto");
    }

    return 0;
}
