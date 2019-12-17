#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    float nota1, nota2, nota3;
    float cred1, cred2, cred3, rsg;

    printf("Escreva a sua primeira nota (0 a 100): ");
    scanf("%f", &nota1);
    printf("Escreva o credito da sua primeira nota (2 a 6): ");
    scanf("%f", &cred1);
    printf("Escreva a sua segunda nota (0 a 100): ");
    scanf("%f", &nota2);
    printf("Escreva o credito da sua segunda nota (2 a 6): ");
    scanf("%f", &cred2);
    printf("Escreva a sua terceira nota (0 a 100): ");
    scanf("%f", &nota3);
    printf("Escreva o credito da sua terceira nota (2 a 6): ");
    scanf("%f", &cred3);


    if(nota1 > 100 || nota1 < 0 || nota2 > 100 || nota2 < 0 || nota3 > 100 || nota3 < 0 || cred1 < 2 || cred1 > 6 ||cred2 < 2 || cred2 > 6 || cred3 < 2 || cred3 > 6) {
        printf("O valor informado nao e valido.");
    }

    //nota1
    else if(nota1 >= 90) {
        nota1 = 5;
    }
    else if(nota1 >= 80) {
        nota1 = 4;
    }
    else if(nota1 >= 70) {
        nota1 = 3;
    }
    else if(nota1 >= 60) {
        nota1 = 2;
    }
    else if(nota1 >= 40) {
        nota1 = 1;
    }
    else {
        nota1 = 0;
    }

    //nota2
    if(nota2 >= 90) {
        nota2 = 5;
    }
    else if(nota2 >= 80) {
        nota2 = 4;
    }
    else if(nota2 >= 70) {
        nota2 = 3;
    }
    else if(nota2 >= 60) {
        nota2 = 2;
    }
    else if(nota2 >= 40) {
        nota2 = 1;
    }
    else {
        nota2 = 0;
    }

    //nota3
    if(nota3 >= 90) {
        nota3 = 5;
    }
    else if(nota3 >= 80) {
        nota3 = 4;
    }
    else if(nota3 >= 70) {
        nota3 = 3;
    }
    else if(nota3 >= 60) {
        nota3 = 2;
    }
    else if(nota3 >= 40) {
        nota3 = 1;
    }
    else {
        nota3 = 0;
    }

    rsg = ((nota1 * cred1) + (nota2 * cred2) + (nota3 * cred3)) / (cred1 + cred2 + cred3);

    printf("\nO valor do RSG do aluno: %.2f", rsg);

    return 0;
}
