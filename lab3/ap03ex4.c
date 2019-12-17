#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int MDC(int a, int b) {
    int resto, resultadoMDC;

    while(b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }
    
    resultadoMDC = a;
    return(resultadoMDC);
}

int main() {
    int num1, num2, resultado;
    char letra;
    do {
      printf("Escreva dois valores para calcular o MDC: ");
      scanf("%d %d", &num1, &num2);
      resultado= MDC(num1, num2);
      printf("O MDC e: %d\n", resultado);

      printf("Continuar? (S ou N)");
      letra = getche();
      printf("\n");
    } while((letra == 'S') || (letra == 's'));
    
    return 0;
}
