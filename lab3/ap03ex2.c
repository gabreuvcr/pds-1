#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int a, b, resto;
  printf("Escreva dois valores para calcular o MDC: ");
  scanf("%d %d", &a, &b);

  while(b != 0) {
      resto = a % b;
      a = b;
      b = resto;
  }

  printf("O valor do MDC e: %d", a);
  
  return 0;
}
